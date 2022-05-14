from math import sin, cos, pi
from math import *
import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from nav_msgs.msg import Odometry
from tf2_ros import TransformBroadcaster, TransformStamped
import tf_transformations as tft
from ava_kinematics import kinematics
from ava_msgs.msg import LegPosition, AvaPose, AvaInfo

# Motion publisher which subscribes to topics AvaPose, LegPosition to output angles for leg joints.


class MotionPublisher(Node):

    def __init__(self):
        super().__init__('motion_publisher')

        qos_profile = QoSProfile(depth=5)
        self.nodeName = self.get_name()
        self.get_logger().info("{0} started".format(self.nodeName))

        self.ava_bodyIK = kinematics.bodyIK(0., 0., 0., 0., 0., 0.)
        self.linear_velocity = [0., 0., 0.]  # x, y ,z
        self.angular_velocity = [0., 0., 0.]
        self.x_distance = 0
        self.y_distance = 0
        self.rot = 0

        self.gait_cycle_time = 1.0
        self.timer_gait_period = self.gait_cycle_time/40  # seconds
        self.timer_ava_motion = self.create_timer(
            self.timer_gait_period, self.timer_ava_motion_callback)

        # Initialize joint publisher, odometry and transform broadcaster
        self.joint_pub = self.create_publisher(
            JointState, 'joint_states', qos_profile)
        self.broadcaster = TransformBroadcaster(self, qos=qos_profile)
        self.odom_pub = self.create_publisher(
            Odometry, 'odom', qos_profile)

        # Subscriber for pose of the robot.
        self.ava_pose_sub = self.create_subscription(
            AvaPose,
            'ava_pose',
            self.handle_ava_pose,
            qos_profile
        )
        self.ava_pose_sub

        # Subscriber for joint angles of the legs.
        self.ava_joint_sub = self.create_subscription(
            LegPosition,
            'ava_leg_position',
            self.handle_ava_joints,
            qos_profile
        )
        self.ava_joint_sub

        self.ava_info_sub = self.create_subscription(
            AvaInfo,
            'ava_info',
            self.handle_ava_info,
            qos_profile
        )
        self.ava_info_sub

    def handle_ava_pose(self, msg):

        # Read message and publish tf transform
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'odom'
        t.child_frame_id = 'base_link'

        t.transform.translation.x = msg.x + self.x_distance
        t.transform.translation.y = msg.y + self.y_distance
        t.transform.translation.z = msg.z

        q = tft.quaternion_from_euler(msg.roll, msg.pitch, msg.yaw + self.rot)
        t.transform.rotation.x = q[0]
        t.transform.rotation.y = q[1]
        t.transform.rotation.z = q[2]
        t.transform.rotation.w = q[3]

        # Send the transform
        self.broadcaster.sendTransform(t)

        # Publish odometry
        odom = Odometry()
        odom.header.stamp = self.get_clock().now().to_msg()
        odom.header.frame_id = 'odom'

        # Set Position
        odom.pose.pose.position.x = msg.x + self.x_distance
        odom.pose.pose.position.y = msg.y + self.y_distance
        odom.pose.pose.position.z = msg.z
        odom.pose.pose.orientation.x = q[0]
        odom.pose.pose.orientation.y = q[1]
        odom.pose.pose.orientation.z = q[2]
        odom.pose.pose.orientation.w = q[3]

        # Set Velocity
        odom.child_frame_id = 'base_link'
        odom.twist.twist.linear.x = self.linear_velocity[0]
        odom.twist.twist.linear.y = self.linear_velocity[1]
        odom.twist.twist.linear.z = self.linear_velocity[2]

        odom.twist.twist.angular.x = self.angular_velocity[0]
        odom.twist.twist.angular.y = self.angular_velocity[1]
        odom.twist.twist.angular.z = self.angular_velocity[2]

        # Publish odom
        self.odom_pub.publish(odom)

        # Solve forward kinematics based on pose of body of robot
        try:
            self.ava_bodyIK = kinematics.bodyIK(
                msg.roll, msg.pitch, msg.yaw, msg.x, msg.y, msg.z)
        except:
            print('Values out of range.')
            print('Roll: ', msg.roll, 'Pitch: ',
                  msg.pitch, 'Yaw: ', msg.yaw)

    def handle_ava_joints(self, msg):

        # Read msg and body kinematics and solve angles
        try:
            angles = kinematics.solve_angles(
                msg.fl_leg_pos,
                msg.fr_leg_pos,
                msg.br_leg_pos,
                msg.bl_leg_pos,
                self.ava_bodyIK)
        except:
            print("Values out of range.")
            angles = np.zeros((4, 3))

        # Update joint state
        j = JointState()
        j.header.stamp = self.get_clock().now().to_msg()
        j.name = ['joint_shoulder_fl', 'joint_femur_fl', 'joint_tibia_fl',
                  'joint_shoulder_fr', 'joint_femur_fr', 'joint_tibia_fr',
                  'joint_shoulder_br', 'joint_femur_br', 'joint_tibia_br',
                  'joint_shoulder_bl', 'joint_femur_bl', 'joint_tibia_bl']
        j.position = [angles[0][0], angles[0][1], angles[0][2],
                      angles[1][0], angles[1][1], angles[1][2],
                      angles[2][0], angles[2][1], angles[2][2],
                      angles[3][0], angles[3][1], angles[3][2]]

        # Send joint state
        self.joint_pub.publish(j)

    def handle_ava_info(self, msg):

        self.linear_velocity = [msg.velocity.linear_x,
                                msg.velocity.linear_y, msg.velocity.linear_z]
        self.angular_velocity = [msg.velocity.angular_x,
                                 msg.velocity.angular_y, msg.velocity.angular_z]

    def timer_ava_motion_callback(self):
        l_vel = sqrt(self.linear_velocity[0] * self.linear_velocity[0] +
                     self.linear_velocity[1] * self.linear_velocity[1])
        r_vel = self.angular_velocity[2]
        a_vel = atan2(self.linear_velocity[1], self.linear_velocity[0])

        self.rot += self.angular_velocity[2] * self.timer_gait_period
        self.x_distance += l_vel * \
            cos(a_vel + self.rot) * self.timer_gait_period
        self.y_distance += l_vel * \
            sin(a_vel + self.rot) * self.timer_gait_period


def main():
    rclpy.init()
    node = MotionPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    rclpy.shutdown()


if __name__ == '__main__':
    main()
