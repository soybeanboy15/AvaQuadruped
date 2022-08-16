from os import system
import sys
import msvcrt
from math import *
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from ava_msgs.msg import LegPosition, AvaPose, AvaCommand
from sensor_msgs.msg import Joy


msg = """
This node uses a joystick to control AVA.

A: Start
B: Sleep
X: Kinematics Mode
Y: Walking Mode

For Kinematics mode:

LX: Yaw
LY: Pitch
RX: Roll

For Walking mode:

LX: Left/right translation
LY: Forward/Backward
RX: Left/right yaw

CTRL-C to quit
"""


class TeleOpJoy(Node):

    def __init__(self):
        super().__init__('teleop_joy')
        qos_profile = QoSProfile(depth=2)
        self.publisher_ = self.create_publisher(
            AvaCommand, 'ava_command', qos_profile)

        self.ava_joy_sub = self.create_subscription(
            Joy,
            'joy',
            self.handle_ava_joy,
            qos_profile
        )
        self.ava_joy_sub

        self.command = AvaCommand()
        self.command.teleop_mode = 'keyboard'
        self.linear_velocity = [0., 0., 0.]
        self.angular_velocity = [0., 0., 0.]
        self.pose = AvaPose()
        self.pose.x = 0.
        self.pose.y = 0.
        self.pose.z = 0.
        self.pose.roll = 0.
        self.pose.pitch = 0.
        self.pose.yaw = 0.
        self.state = 'Sleep'
    
    def handle_ava_joy(self, msg):
        # Handle states with button input
        button = MapXboxButtons(msg.buttons)
        if button == 'A' and self.state == 'Sleep':
            self.state = 'Start'
            print("Start")
        
        elif self.state != 'Sleep':
            if button == 'B':
                self.state = 'Sleep'
                print("Sleep")
            elif button == 'X':
                self.state = 'Kinematics'
                print("Kinematics")
            elif button == 'Y':
                self.state = 'Gait'
                print("Gait")
        
        # Map axes to angles for kinematics and velocity for gait state
        if self.state == 'Kinematics':
            self.pose.roll = -msg.axes[3] * 0.35 # Right X-Axis
            self.pose.yaw = msg.axes[0] * 0.35  # Left X-Axis
            self.pose.pitch = msg.axes[1] * 0.35 # Left Y-Axis
        elif self.state == 'Gait':
            self.linear_velocity[0] = msg.axes[1] * 0.26
            self.linear_velocity[1] = msg.axes[0] * 0.18
            self.angular_velocity[2] = msg.axes[3] * 0.4

        # Intialize command msg and publsih
        self.command.velocity.linear_x = self.linear_velocity[0]
        self.command.velocity.linear_y = self.linear_velocity[1]     
        self.command.velocity.angular_z = self.angular_velocity[2]

        self.command.pose = self.pose

        self.command.state_msg = self.state
        self.publisher_.publish(self.command)

def MapXboxButtons(buttons):
    button = ''
    if buttons[0] == 1:
        button = 'A'
    elif buttons[1] == 1:
        button = 'B'
    elif buttons[2] == 1:
        button = 'X'     
    elif buttons[3] == 1:
        button = 'Y'
    elif buttons[4] == 1:
        button = 'LB'
    elif buttons[5] == 1:
        button = 'RB'
    return button

def main(args=None):
    rclpy.init(args=args)
    print(msg)
    ava_teleop_joy = TeleOpJoy()

    rclpy.spin(ava_teleop_joy)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    ava_teleop_joy.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
