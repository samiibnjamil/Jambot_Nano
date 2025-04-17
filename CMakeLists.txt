cmake_minimum_required(VERSION 3.16)
project(jambot_nano LANGUAGES CXX)

if(CMAKE_CXX_COMPILER_ID MATCHES "(GNU|Clang)")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
set(THIS_PACKAGE_INCLUDE_DEPENDS
  rclcpp
  std_msgs
  sensor_msgs
  geometry_msgs
  nav_msgs
  hardware_interface
  controller_manager
)

find_package(ament_cmake REQUIRED)
foreach(Dependency IN ITEMS ${THIS_PACKAGE_INCLUDE_DEPENDS})
  find_package(${Dependency} REQUIRED)
endforeach()

## COMPILE
add_library(
  jambot_nano
  SHARED
  src/hardware_interface/jambot_system.cpp
  src/hardware_interface/arduino_comms.cpp
  src/hardware_interface/wheel.cpp
)
target_compile_features(jambot_nano PUBLIC cxx_std_17)
target_include_directories(jambot_nano PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/jambot_nano>
)
ament_target_dependencies(
  jambot_nano PUBLIC
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)

# target_link_libraries(jambot_nano PUBLIC ...) # Add if you have extra libraries

target_compile_definitions(${PROJECT_NAME} PRIVATE "JAMBOT_NANO_BUILDING_DLL")

# Export hardware plugins if you have a plugin description file
# pluginlib_export_plugin_description_file(hardware_interface jambot_nano.xml)

# INSTALL
install(
  DIRECTORY include/
  DESTINATION include/jambot_nano
)
install(
  DIRECTORY launch/
  DESTINATION share/jambot_nano
)
install(
  DIRECTORY config/
  DESTINATION share/jambot_nano
)
install(
  DIRECTORY urdf/
  DESTINATION share/jambot_nano/urdf
)
install(TARGETS jambot_nano
  EXPORT export_jambot_nano
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
endif()

ament_export_targets(export_jambot_nano HAS_LIBRARY_TARGET)
ament_export_dependencies(${THIS_PACKAGE_INCLUDE_DEPENDS})
ament_package()
