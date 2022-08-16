# Quadruped Ava v2

This is version 2 of my quadruped robot Ava. The changes from v1:
- Improved mechanical design, lighter and leg design more robust.
- Implementation of LiDAR sensor for SLAM.
- All software is now implemented in ROS2

Ava is an ongoing project where I designed and built a quadruped robot from scratch. Ava was designed in OnShape and almost all parts are 3D printed. For electronics, twelve hobby servos are used for 12 DOF, a Jetson Nano is used as the 'brains' of the robot and a lidar, camera, accelerometer and gyro are implemented for localization and closed loop feedback.

**For more information about this project please view the wiki tab!**

# Walking Demo

https://www.youtube.com/watch?v=DkIpW4jh81Y

# Ros2 Demo

This gif capture shows a representation of Ava in RVIZ and showing real time lidar data. Note that the physical robot is not moving while moving the rviz model so the position of ava relative to the lidar data is not valid.

![Ros Demo](https://raw.githubusercontent.com/soybeanboy15/dev_ava/hq/assets/RosDemo.gif)

# Photos and Renders

![Front Photo](https://raw.githubusercontent.com/soybeanboy15/dev_ava/master/assets/FrontPhoto.png)
![Back Photo](https://raw.githubusercontent.com/soybeanboy15/dev_ava/master/assets/BackPhoto.png)
![Render](https://raw.githubusercontent.com/soybeanboy15/dev_ava/master/assets/RenderAva.png)






