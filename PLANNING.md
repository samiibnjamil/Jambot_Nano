# System Architecture Overview

## Core Nodes
- hardware_interface
- lidar_pointcloud_publisher
- camera_detection_node
- ai_chat_assistant
- eye_display_node
- slam_mapping
- teleop_twist_joy
- task_manager
- battery_monitor

## Topics
- /cmd_vel
- /imu/data
- /encoder
- /battery_voltage
- /lidar/pointcloud
- /camera/image_raw
- /lego_detection
- /dock_status

## Services
- /set_led_state
- /play_buzzer
- /update_pid
- /start_docking
- /get_ai_response

## Actions
- /navigate_to_point
- /collect_legos

## Command Protocol
| Command | Format            | Description                    |
|:----------|:--------------------|:---------------------------------|
| M        | `M <pwm1> <pwm2>`    | Motor PWM control               |
| L        | `L W/G B`            | RGB LED state                   |
| N        | `N <soundType>`      | Play buzzer                     |
| P        | `P <Kp> <Ki> <Kd>`   | Live PID tuning                 |
| E        | `E`                  | Encoder counts                  |
| I        | `I`                  | IMU data                        |
| B        | `B`                  | Battery voltage                 |
| R        | `R`                  | Reset encoders                  |

## URDF Frames
- base_link
  - laser
  - camera_link
  - imu_link
  - caster_wheel
  - left_wheel_joint
  - right_wheel_joint
  - display_link

## Dependencies
- See README.md install instructions
