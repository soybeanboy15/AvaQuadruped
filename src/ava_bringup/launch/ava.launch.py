from http.server import executable
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    rplidar = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('rplidar_ros2'), 'launch'),
            '/rplidar_launch.py'])
    )

    return LaunchDescription([

        Node(
            package='ava_control',
            executable='ava_motion',
            name='ava_motion',
            output='screen'),
        Node(
            package='ava_control',
            executable='ava_control',
            name='ava_control',
            output='screen'),
        Node(
            package='ava_driver',
            executable='ava_driver',
            name='ava_driver',
            output='screen',),
        rplidar

    ])
