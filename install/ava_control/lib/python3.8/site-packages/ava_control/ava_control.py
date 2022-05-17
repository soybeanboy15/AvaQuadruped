from math import sin, cos, pi
from math import *
import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
import tf_transformations as tft
from ava_msgs.msg import AvaCommand, LegPosition, AvaPose, AvaInfo
# Control publisher which handles states of the robot and publishes avapose and ava posiion based on comman received from keyboard or joystick.

# ----- Constants -----
degree = pi/180.0

# ---- Gait Parameters ----
x_offset = 0.015
step_height = 0.017
gait_freq = 0.028

# --- Neutral leg position and pose ---
ava_leg_position_neutral = LegPosition()
ava_leg_position_neutral.fl_leg_pos = [0.117, 0.0885, -sqrt(2)*0.1, 1.0]
ava_leg_position_neutral.fr_leg_pos = [0.117, -0.0885, -sqrt(2)*0.1, 1.0]
ava_leg_position_neutral.br_leg_pos = [-0.117, -0.0885, -sqrt(2)*0.1, 1.0]
ava_leg_position_neutral.bl_leg_pos = [-0.117, 0.0885, -sqrt(2)*0.1, 1.0]

ava_pose_neutral = AvaPose()
ava_pose_neutral.x = x_offset
ava_pose_neutral.y = 0.
ava_pose_neutral.z = 0.
ava_pose_neutral.roll = 0.
ava_pose_neutral.pitch = 0.
ava_pose_neutral.yaw = 0.

# -- Sleep pose ===
ava_pose_sleep = ava_pose_neutral
ava_pose_sleep.z = -0.08

class AvaControl(Node):

    def __init__(self):
        super().__init__('ava_control')

        qos_profile = QoSProfile(depth=5)
        self.nodeName = self.get_name()
        self.get_logger().info("{0} started".format(self.nodeName))

        # Initialize leg position, pose and info publisher
        self.publisher_legs = self.create_publisher(
            LegPosition, 'ava_leg_position', qos_profile)
        self.publisher_pose = self.create_publisher(
            AvaPose, 'ava_pose', qos_profile)
        self.publisher_info = self.create_publisher(
            AvaInfo, 'ava_info', qos_profile)

        # Timer for routines for sleep and start state
        timer_routine_period = 0.01  # seconds
        self.timer_ava_routines = self.create_timer(
            timer_routine_period, self.timer_ava_routines_callback)

        # Timer for gait
        self.gait_cycle_time = 1.0
        timer_gait_period = gait_freq
        self.timer_ava_gait = self.create_timer(
            timer_gait_period, self.timer_ava_gait_callback)

        # Timer to publish ava info
        timer_info_period = 0.01
        self.timer_ava_info = self.create_timer(
            timer_info_period, self.timer_ava_info_callback)

        # Subscriber for command of the robot.
        self.ava_command_sub = self.create_subscription(
            AvaCommand,
            'ava_command',
            self.handle_ava_command,
            qos_profile
        )
        self.ava_command_sub

        # Create values to store state, legposition, pose, and velocity of robot.
        self.leg_posiiton = LegPosition()
        self.ava_pose = AvaPose()
        self.ava_pose = ava_pose_sleep
        self.prev_state = ''
        self.state = 'Sleep'
        self.linear_velocity = [0., 0., 0.]  # x, y ,z
        self.angular_velocity = [0., 0., 0.]
        self.i = 0

    def timer_ava_routines_callback(self):
        # Aligns the pose of the robot to it's neutral position and then lowers the robot.
        if self.state == 'Sleep':
            self.prev_state = 'Sleep'
            self.linear_velocity = [0., 0., 0.]  # x, y ,z
            self.angular_velocity = [0., 0., 0.]
            pose_arr = [self.ava_pose.y, self.ava_pose.roll, self.ava_pose.pitch, self.ava_pose.yaw]

            if (all(i == 0. for i in pose_arr) and self.ava_pose.x == x_offset):
                if self.ava_pose.z != -0.08:
                    if self.ava_pose.z <= -0.075 and self.ava_pose.z >= -0.085:
                        self.ava_pose.z = -0.08
                    elif self.ava_pose.z < -0.08:
                        self.ava_pose.z += 0.0007
                    elif self.ava_pose.z > -0.08:
                        self.ava_pose.z -= 0.0007
            else:
                for i in range(len(pose_arr)):
                    if pose_arr[i] <= 0.005 and pose_arr[i] >= -0.005:
                        pose_arr[i] = 0.
                    elif pose_arr[i] < 0:
                        pose_arr[i] += 0.005
                    elif pose_arr[i] > 0:
                        pose_arr[i] -= 0.005
                if self.ava_pose.x != x_offset:
                    if self.ava_pose.x <= (x_offset+0.005) and self.ava_pose.x >= (x_offset-0.005):
                        self.ava_pose.x = x_offset
                    elif self.ava_pose.x < x_offset:
                        self.ava_pose.x += 0.005
                    elif self.ava_pose.x > -x_offset:
                        self.ava_pose.x -= 0.005

                self.ava_pose.y = pose_arr[0]
                self.ava_pose.roll = pose_arr[1]
                self.ava_pose.pitch = pose_arr[2]
                self.ava_pose.yaw = pose_arr[3]

            self.publisher_legs.publish(ava_leg_position_neutral)
            self.publisher_pose.publish(self.ava_pose)

        # Slowly raise the robot to neutral position.
        elif self.state == 'Start':
            self.prev_state = 'Start'
            if self.ava_pose.z != 0.:
                if self.ava_pose.z <= 0.005 and self.ava_pose.z >= -0.005:
                    self.ava_pose.z = 0.
                else:
                    self.ava_pose.z += 0.0007
            self.publisher_legs.publish(ava_leg_position_neutral)
            self.publisher_pose.publish(self.ava_pose)

    def timer_ava_gait_callback(self):
        # First align pose to neutral position, then calculate the step lengths to input to the trajectory function which outputs leg positions to publish.
        if self.state == 'Gait':
            if self.prev_state != 'Gait':
                pose_arr = [self.ava_pose.y, self.ava_pose.z, self.ava_pose.roll, self.ava_pose.pitch, self.ava_pose.yaw]
                if (all(i == 0. for i in pose_arr) and self.ava_pose.x == x_offset):
                    self.prev_state = 'Gait'
                else:
                    for i in range(len(pose_arr)):
                        if pose_arr[i] <= 0.005 and pose_arr[i] >= -0.005:
                            pose_arr[i] = 0.
                        elif pose_arr[i] < 0:
                            pose_arr[i] += 0.004
                        elif pose_arr[i] > 0:
                            pose_arr[i] -= 0.004
                    if self.ava_pose.x != x_offset:
                        if self.ava_pose.x <= (x_offset+0.005) and self.ava_pose.x >= (x_offset-0.005):
                            self.ava_pose.x = x_offset
                        elif self.ava_pose.x < x_offset:
                            self.ava_pose.x += 0.004
                        elif self.ava_pose.x > -x_offset:
                            self.ava_pose.x -= 0.004

                    self.ava_pose.y = pose_arr[0]
                    self.ava_pose.z = pose_arr[1]
                    self.ava_pose.roll = pose_arr[2]
                    self.ava_pose.pitch = pose_arr[3]
                    self.ava_pose.yaw = pose_arr[4]

                    self.publisher_legs.publish(ava_leg_position_neutral)
                    self.publisher_pose.publish(self.ava_pose)

            else:
                step_x = self.linear_velocity[0] * self.gait_cycle_time/4
                step_y = self.linear_velocity[1] * self.gait_cycle_time/4
                step_angle = self.angular_velocity[2] * \
                    0.117 * self.gait_cycle_time / 4
                self.publisher_pose.publish(self.ava_pose)
                if (np.round(self.linear_velocity[0], 2) != 0) or (np.round(self.linear_velocity[1], 2) != 0) or (np.round(self.angular_velocity[2], 2) != 0):
                    ava_leg_position_msg = LegPosition()
                    fl_traj = trajectory(
                        step_x, step_y + step_angle, step_height, 0, self.i)
                    fr_traj = trajectory(
                        step_x, step_y + step_angle, step_height, 11, self.i)
                    br_traj = trajectory(
                        step_x, step_y - step_angle, step_height, 0, self.i)
                    bl_traj = trajectory(
                        step_x, step_y - step_angle, step_height, 11, self.i)

                    ava_leg_position_msg.fl_leg_pos = [
                        0.117 + fl_traj[0], 0.0885 + fl_traj[1], -sqrt(2)*0.1 + fl_traj[2], 1.0]
                    ava_leg_position_msg.fr_leg_pos = [
                        0.117 + fr_traj[0], -0.0885 + fr_traj[1], -sqrt(2)*0.1 + fr_traj[2], 1.0]
                    ava_leg_position_msg.br_leg_pos = [
                        -0.117 + br_traj[0], -0.0885 + br_traj[1], -sqrt(2)*0.1 + br_traj[2], 1.0]
                    ava_leg_position_msg.bl_leg_pos = [
                        -0.117 + bl_traj[0], 0.0885 + bl_traj[1], -sqrt(2)*0.1 + bl_traj[2], 1.0]

                    self.publisher_legs.publish(ava_leg_position_msg)

                    if self.i >= 21:
                        self.i = 0
                    else:
                        self.i += 1
                else:
                    self.linear_velocity = [0., 0., 0.]
                    self.angular_velocity = [0., 0., 0.]
                    self.publisher_legs.publish(ava_leg_position_neutral)

    def timer_ava_info_callback(self):
        # Publish velocity and state information.
        ava_info_msg = AvaInfo()
        ava_info_msg.state = self.state
        ava_info_msg.velocity.linear_x = np.round(self.linear_velocity[0], 2)
        ava_info_msg.velocity.linear_y = np.round(self.linear_velocity[1], 2)
        ava_info_msg.velocity.linear_z = np.round(self.linear_velocity[2], 2)
        ava_info_msg.velocity.angular_x = np.round(self.angular_velocity[0], 2)
        ava_info_msg.velocity.angular_y = np.round(self.angular_velocity[1], 2)
        ava_info_msg.velocity.angular_z = np.round(self.angular_velocity[2], 2)
        self.publisher_info.publish(ava_info_msg)

    def handle_ava_command(self, msg):
        # Handle state from command given.
        if msg.state_msg == 'Sleep' and self.prev_state != 'Sleep':
            self.state = 'Sleep'
        elif msg.state_msg == 'Start' and self.prev_state == 'Sleep':
            self.state = 'Start'

        if self.prev_state != 'Sleep':
            if msg.state_msg == 'Kinematics':
                self.state = 'Kinematics'
                self.ava_kinematics(msg)
            if msg.state_msg == 'Gait':
                self.state = 'Gait'
                self.ava_vel(msg)

    def ava_kinematics(self, msg):
        # This function takes in the keyhit from the command msg and changes its pose.
        if self.state == 'Kinematics':
            self.prev_state = 'Kinematics'
            self.linear_velocity = [0., 0., 0.]
            self.angular_velocity = [0., 0., 0.]
            if msg.keyhit == 'i':
                self.ava_pose.x += 0.002
            elif msg.keyhit == 'k':
                self.ava_pose.x -= 0.002
            elif msg.keyhit == 'j':
                self.ava_pose.y += 0.002
            elif msg.keyhit == 'l':
                self.ava_pose.y -= 0.002
            elif msg.keyhit == 'u':
                self.ava_pose.z += 0.002
            elif msg.keyhit == 'o':
                self.ava_pose.z -= 0.002
            elif msg.keyhit == 'w':
                self.ava_pose.pitch += degree*2
            elif msg.keyhit == 's':
                self.ava_pose.pitch -= degree*2
            elif msg.keyhit == 'a':
                self.ava_pose.yaw += degree*2
            elif msg.keyhit == 'd':
                self.ava_pose.yaw -= degree*2
            elif msg.keyhit == 'q':
                self.ava_pose.roll += degree*2
            elif msg.keyhit == 'e':
                self.ava_pose.roll -= degree*2
            elif msg.keyhit == 'r':
                self.ava_pose.x = 0.
                self.ava_pose.y = 0.
                self.ava_pose.z = 0.
                self.ava_pose.roll = 0.
                self.ava_pose.pitch = 0.
                self.ava_pose.yaw = 0.
            self.publisher_legs.publish(ava_leg_position_neutral)
            self.publisher_pose.publish(self.ava_pose)

    def ava_vel(self, msg):
        # Handle keyhit for velocity
        if msg.keyhit == 'w':
            self.linear_velocity[0] += 0.01
        elif msg.keyhit == 's':
            self.linear_velocity[0] -= 0.01
        elif msg.keyhit == 'a':
            self.linear_velocity[1] += 0.01
        elif msg.keyhit == 'd':
            self.linear_velocity[1] -= 0.01
        elif msg.keyhit == 'q':
            self.angular_velocity[2] += 0.01
        elif msg.keyhit == 'e':
            self.angular_velocity[2] -= 0.01
        elif msg.keyhit == 'r':
            self.linear_velocity = [0., 0., 0.]
            self.angular_velocity = [0., 0., 0.]


def trajectory(step_lengthx, step_lengthy, step_height, offset, index):

    # ---- Stance ----
    # 11 evenly interpolated points in a straight line

    x_points_stance = np.linspace(step_lengthx, -step_lengthx, 11)
    y_points_stance = np.linspace(step_lengthy, -step_lengthy, 11)
    z_points_stance = np.zeros(11)

    # ---- Swing ----
    # 5 evenly interpolated points each side of the triangle gradients with a 0 appended in the middle.

    # -- X --
    x_points_swing1 = np.delete(np.linspace(-step_lengthx, 0, 7), [0, 6])
    x_points_swing2 = -np.flip(x_points_swing1)
    x_points_swing1 = np.append(x_points_swing1, 0)

    # -- Y --
    y_points_swing1 = np.delete(np.linspace(-step_lengthy, 0, 7), [0, 6])
    y_points_swing2 = -np.flip(y_points_swing1)
    y_points_swing1 = np.append(y_points_swing1, 0)

    # -- Z --
    # Find z (height) points along slope of triangle
    if sqrt(step_lengthx**2 + step_lengthy**2) == 0:
        m = 0
    else:
        m = -step_height/sqrt(step_lengthx**2 + step_lengthy**2)

    z_points_swing1 = m*np.sqrt(x_points_swing1**2 +
                                y_points_swing1**2) + step_height
    z_points_swing2 = m*np.sqrt(x_points_swing2**2 +
                                y_points_swing2**2) + step_height

    # Append both stance and swing trajectories into one
    trajectory_x = np.append(x_points_stance, np.append(
        x_points_swing1, x_points_swing2))
    trajectory_y = np.append(y_points_stance, np.append(
        y_points_swing1, y_points_swing2))
    trajectory_z = np.append(z_points_stance, np.append(
        z_points_swing1, z_points_swing2))

    # Apply any offset in gait
    trajectory_x = np.roll(trajectory_x, offset)
    trajectory_y = np.roll(trajectory_y, offset)
    trajectory_z = np.roll(trajectory_z, offset)

    return [trajectory_x[index], trajectory_y[index], trajectory_z[index]]


def main():
    rclpy.init()
    node = AvaControl()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    rclpy.shutdown()


if __name__ == '__main__':
    main()
