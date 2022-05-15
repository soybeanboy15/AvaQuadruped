from os import system
import sys
import msvcrt
from math import *
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from ava_msgs.msg import LegPosition, AvaPose, AvaCommand, AvaInfo


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


class TeleOpKey(Node):

    def __init__(self):
        super().__init__('teleop_key')
        qos_profile = QoSProfile(depth=2)
        self.publisher_ = self.create_publisher(
            AvaCommand, 'ava_command', qos_profile)
        timer_period = 0.01  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.ava_info_sub = self.create_subscription(
            AvaInfo,
            'ava_info',
            self.handle_ava_info,
            qos_profile
        )
        self.ava_info_sub

        self.command = AvaCommand()
        self.command.teleop = 'keyboard'
        self.prev_linear_velocity = []
        self.prev_angular_velocity = []
        self.linear_velocity = []
        self.angular_velocity = []
        self.prev_state = ''
        self.state = ''

    def timer_callback(self):

        if msvcrt.kbhit():
            key = msvcrt.getwch()
            self.handle_key(key)

        self.publisher_.publish(self.command)
        self.command.keyhit = ''

        if self.linear_velocity != self.prev_linear_velocity:
            self.prev_linear_velocity = self.linear_velocity
            print('Linear Velocity (m/s): ', self.linear_velocity)
        if self.angular_velocity != self.prev_angular_velocity:
            self.prev_angular_velocity = self.angular_velocity
            print('Angular Velocity: ', self.angular_velocity)
        if self.state != self.prev_state:
            self.prev_state = self.state
            print('State: ', self.state)

    def handle_key(self, key):
        self.command.keyhit = key
        if key == 'z':
            self.command.state_msg = 'Sleep'
        elif key == 'x':
            self.command.state_msg = 'Start'
        elif key == 'c':
            self.command.state_msg = 'Kinematics'
        elif key == 'v':
            self.command.state_msg = 'Gait'

    def handle_ava_info(self, msg):
        self.linear_velocity = [msg.velocity.linear_x,
                                msg.velocity.linear_y, msg.velocity.linear_z]
        self.angular_velocity = [msg.velocity.angular_x,
                                 msg.velocity.angular_y, msg.velocity.angular_z]
        self.state = msg.state


def main(args=None):
    rclpy.init(args=args)
    print(msg)
    ava_teleop_key = TeleOpKey()

    rclpy.spin(ava_teleop_key)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    ava_teleop_key.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
