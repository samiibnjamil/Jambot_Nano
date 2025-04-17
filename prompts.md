# 🤖 ROS 2 AI Prompt Library

## 📅 Date: 2024-04-17

### ROS 2 Version: Humble

## 🚀 Node Creation Prompts

### Hardware Interface Node
- **Use Case**: Creating a hardware interface for Arduino Nano communication
- **Effectiveness**: High
- **Notes**: Include serial communication, error handling, and watchdog timer
- **Tags**: #hardware_interface #serial_communication #ros2_control

### Camera Node
- **Use Case**: CSI camera interface and image processing
- **Effectiveness**: Medium
- **Notes**: Consider using image_transport for efficient image handling
- **Tags**: #camera #image_processing #csi

### LiDAR Node
- **Use Case**: YDLIDAR X3 integration and pointcloud publishing
- **Effectiveness**: High
- **Notes**: Include proper TF frame setup and pointcloud conversion
- **Tags**: #lidar #pointcloud #slam

## 🛠️ Interface Design Prompts

### Custom Messages
- **Use Case**: Creating custom messages for hardware status and commands
- **Effectiveness**: High
- **Notes**: Follow ROS 2 message naming conventions
- **Tags**: #messages #interface #custom_msgs

### Services
- **Use Case**: Hardware control services (LED, buzzer, etc.)
- **Effectiveness**: Medium
- **Notes**: Include proper error handling and response codes
- **Tags**: #services #hardware_control

## 🚀 Launch File Prompts

### Robot Launch
- **Use Case**: Complete robot system launch configuration
- **Effectiveness**: High
- **Notes**: Include proper namespace and parameter handling
- **Tags**: #launch #configuration #system

### Simulation Launch
- **Use Case**: Gazebo simulation setup
- **Effectiveness**: Medium
- **Notes**: Include proper world and robot spawn configuration
- **Tags**: #gazebo #simulation #testing

## 📝 Modification Log
- 2024-04-17: Initial creation of prompt library 