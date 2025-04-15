# Jambot ROS 2 Jazzy Project

## Overview
A ROS 2 Jazzy-powered 2-wheeled diff-drive robot pet project integrating:
- Arduino Nano (TB6612, IMU, encoders, buzzer, RGB LED)
- RPi 4 (YDLIDAR X3, RPI V1 Camera, Eye Display)
- Joystick control, SLAM, AI Chat Assistant, LEGO detection, auto-docking.

## ROS 2 Version
Jazzy Jalisco

## Install Instructions
```bash
sudo apt update
sudo apt install -y \
  ros-jazzy-xacro \
  ros-jazzy-teleop-twist-joy \
  ros-jazzy-gz-ros2-control \
  ros-jazzy-controller-manager \
  ros-jazzy-diff-drive-controller \
  ros-jazzy-joint-state-broadcaster \
  ros-jazzy-ydlidar-ros2-driver \
  ros-jazzy-serial-driver \
  libserial-dev \
  libserialport-dev \
  python3-serial
```

## Build & Run
```bash
cd ~/ros2_ws
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install
source install/local_setup.bash
ros2 launch jambot jambotstart.py
```

## Supported Serial Commands (Arduino Nano)
| Command | Format              | Description                    |
|:---------|:--------------------|:---------------------------------|
| M       | `M <pwm1> <pwm2>`    | Set motor speeds               |
| L       | `L W/G B`            | Set RGB LED state              |
| N       | `N <soundType>`      | Play buzzer tone (1-3)         |
| E       | `E`                  | Query encoder counts           |
| I       | `I`                  | Query IMU data                 |
| B       | `B`                  | Query battery voltage          |
| R       | `R`                  | Reset encoder counts           |
| P       | `P <Kp> <Ki> <Kd>`   | Update PID values live         |
