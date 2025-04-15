## 2025-04-15
- Added `P <Kp> <Ki> <Kd>` live PID command protocol to firmware
- Updated PLANNING.md with proper 2-wheel diff-drive + caster architecture
- Cleaned up install instructions in README.md
- Documented peripheral service server plan for LED, buzzer, PID
- Logged final hardware node plan and topics

## 2025-04-10
- LiDAR and joystick control tested and confirmed
- Created rough xacro URDF draft for initial frame setup
- Installed teleop_twist_joy, diff-drive controller, joint-state broadcaster packages

## 2025-04-07
- Bench tested ultrasonic sensor via ESP32 and confirmed serial data streaming to RPi
- Confirmed pointcloud publishing through YDLIDAR package
- Set up ROS 2 Control hardware_interface draft structure
- Serial communication working over USB on ROS 2 Jazzy
