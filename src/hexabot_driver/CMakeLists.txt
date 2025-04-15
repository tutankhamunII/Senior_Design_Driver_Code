cmake_minimum_required(VERSION 3.8)
project(hexabot_driver)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(hexabot_msgs REQUIRED)

install(DIRECTORY include/
  DESTINATION include
)
install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)
add_executable(
hexabot_node src/hexabot_node.cpp
src/hexabot_driver.cpp)

ament_target_dependencies(hexabot_node rclcpp hexabot_msgs std_msgs)
target_include_directories(hexabot_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
install(TARGETS 
hexabot_node
DESTINATION lib/${PROJECT_NAME})
ament_package()
