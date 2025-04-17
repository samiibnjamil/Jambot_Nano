## ✅ Hardware Setup
[x] Arduino Nano + TB6612
[x] RPi V1 Camera (CSI)
[x] YDLIDAR X3
[x] MPU-6050 IMU

## ⚙️ Control
[x] Finalize ros2_control hardware_interface
[ ] Peripheral service node for buzzer, LED, PID tuning
[ ] Add error handling and retry mechanism for serial communication
[ ] Implement watchdog timer for hardware interface
[ ] Add proper command validation for motor values

## 🏗️ Chassis
[ ] Redesign chassis for LiDAR, Camera, Display, Dock contacts, wiring

## 🧠 AI/UX
[ ] AI Chat Assistant Node
[ ] Eye Display Node (face expressions)

## 🗺️ Mapping & SLAM
[x] Test Manufacturer's LiDAR Pointcloud publisher node
[ ] LiDAR Pointcloud publisher node
[ ] Integrate SLAM Toolbox
[ ] Integrate Nav2

## 🎮 Manual Control
[ ] Teleop Twist Joy config + remapping

## 📦 Task Manager
[ ] Autonomous task manager node
[ ] Docking control logic

## 📦 LEGO Detection
[ ] YOLO/OpenCV LEGO detection node
[ ] Detection topic and position publishing

## 🔋 Charging
[ ] Battery monitor node
[ ] Dock detection sensor integration
[ ] Dock navigation behavior

## 📐 URDF Updates
[ ] Update robot xacro:
  [ ] LiDAR mount frame
  [ ] Camera frame
  [ ] Eye display link
  [ ] Dock contact geometry

## 📊 Testing
[ ] Gazebo simulation world config
[ ] Rviz mapping test
[ ] AI Assistant CLI test
[ ] LEGO detection demo test
[ ] Docking navigation demo
[ ] Hardware interface unit tests
[ ] Serial communication stress tests
