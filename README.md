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
  python3-serial \
  ros-jazzy-hardware-interface \
  ros-jazzy-ros2-control
```

## Build & Run
```bash
cd ~/ros2_ws
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install
source install/local_setup.bash
ros2 launch jambot jambotstart.py
```

## Hardware Interface
The hardware interface node provides:
- Serial communication with Arduino Nano
- Motor control and encoder feedback
- Error handling and retry mechanisms
- Hardware status monitoring
- Watchdog timer for safety

## Supported Serial Commands (Arduino Nano)
| Command | Format              | Description                    |
|:---------|:--------------------|:---------------------------------|
| M       | `m <m1> <m2>`        | Set motor speeds in rad/s       |
| L       | `l W/G B`            | Set RGB LED state              |
| N       | `n <soundType>`      | Play buzzer tone (1-10)        |
| E       | `e`                  | Query encoder counts           |
| I       | `i`                  | Query IMU data                 |
| B       | `b`                  | Query battery voltage          |
| R       | `r`                  | Reset encoder counts           |
| P       | `p <Kp> <Ki> <Kd>`   | Update PID values live         |
| S       | `s`                  | Get hardware status            |

## Error Handling
The hardware interface includes:
- Serial communication timeout handling
- Motor command validation
- Encoder reading error recovery
- Hardware status monitoring
- Watchdog timer implementation
