from math import sin, cos, pi
from math import *
import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
import tf_transformations as tft
from ava_msgs.msg import LegPosition, AvaPose, AvaInfo
from ava_driver import ava_servo



class AvaDriver(Node):

    def __init__(self):
        super().__init__('ava_driver')

        qos_profile = QoSProfile(depth=1, reliability=QoSReliabilityPolicy.RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT)
        self.nodeName = self.get_name()
        self.get_logger().info("{0} started".format(self.nodeName))
        self.servos = ava_servo.Servos()
        self.servos.CalibrateServo()
        self.joints = [0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0, 0, 0, 0]
        self.timer_servo = self.create_timer(0.02, self.timer_ava_servo_callback)
        print("Servos Initialized!")


        self.ava_joints_sub = self.create_subscription(
            JointState,
            'joint_states',
            self.handle_ava_joints,
            qos_profile
        )
        self.ava_joints_sub

   

    def handle_ava_joints(self,msg):
        self.joints = np.rad2deg(msg.position)

    def timer_ava_servo_callback(self):
        self.servos.MoveServo(self.joints)



def main():
    rclpy.init()
    node = AvaDriver()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    rclpy.shutdown()


if __name__ == '__main__':
    main()
