cmake_minimum_required(VERSION 3.0)
project(components_tutorial)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp REQUIRED)

add_library(motor_controller_component src/component_test.cpp)
ament_target_dependencies(motor_controller_controller_component "my_namespace::MotorController")

intrall(TARGETS
	motor_controller_component
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin
)

ament_package()
