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
This node takes keypresses from the keyboard and publishes them
over AvaCommand Topic. 
q   w   e       u   i   o
a   s   d       j   k   l
w/s: Pitch
a/d: Yaw
q/e: Roll

i/k: X translation
j/l: Y translation
u/o: Z translation

z:

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
        self.linear_velocity = []
        self.angular_velocity = []
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
