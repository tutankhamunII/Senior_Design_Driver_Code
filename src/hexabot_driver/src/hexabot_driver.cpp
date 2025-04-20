#include <memory>
#include <chrono>
#include <functional>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "hexabot_driver/hexabot_driver.hpp"

hexabot_driver::hexabot_driver() : Node("hexabot_node"), count(0)
{
  // Initialize the subscription
  actuator_positions_subscriber = this->create_subscription<std_msgs::msg::Float32MultiArray>("/teensy/actuator_positions", 10, std::bind(&hexabot_driver::actuator_positions_callback, this, _1));
  system_currents_subscriber = this->create_subscription<std_msgs::msg::Float32MultiArray>("/teensy/system_currents", 10, std::bind(&hexabot_driver::system_currents_callback, this, _1));
  system_temperatures_subscriber = this->create_subscription<std_msgs::msg::Float32MultiArray>("/teensy/system_temperatures", 10, std::bind(&hexabot_driver::system_temperatures_callback, this, _1));
  diagnostics_subscriber = this->create_subscription<std_msgs::msg::UInt8MultiArray>("/teensy/diagnostics", 10, std::bind(&hexabot_driver::diagnostics_callback, this, _1));
  hexabot_message_publisher = this->create_publisher<hexabot_msgs::msg::Hexabot>("/hexabot_feedback", 10);
  heart_beat_publisher = this->create_publisher<std_msgs::msg::Empty>("/hexabot_driver/heart_beat", 10);
  hexabot_message_timer = this->create_wall_timer(2000ms, std::bind(&hexabot_driver::hexabot_message_timer_callback, this));
  heart_beat_timer = this->create_wall_timer(100ms, std::bind(&hexabot_driver::heart_beat_timer_callback, this));
}

void hexabot_driver::heart_beat_timer_callback(){
  std_msgs::msg::Empty empty;
  heart_beat_publisher->publish(empty);
}
void hexabot_driver::hexabot_message_timer_callback(){
  formate_hexabot_message();
  hexabot_message_publisher->publish(hexabot_message);
}
void hexabot_driver::actuator_positions_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg)
{
  if(std::fabs(msg->data[7] - 3.14) < 1e-5){
    actuator_positions_teensy = *msg;
  }
}
void hexabot_driver::system_currents_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg)
{
  if(std::fabs(msg->data[8] - 3.14) < 1e-5){
    system_currents_teensy = *msg;
  }
}
void hexabot_driver::system_temperatures_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg)
{
  if(std::fabs(msg->data[2] - 3.14) < 1e-5){
    system_temperatures_teensy = *msg;
  }
}
void hexabot_driver::diagnostics_callback(const std_msgs::msg::UInt8MultiArray::SharedPtr msg)
{
  if(msg->data[13] == 5){
    diagnostics_teensy = *msg;
  }
}
void hexabot_driver::formate_hexabot_message()
{
  if(actuator_positions_teensy.data.size() == 8){
    //populate the actuator positions driver message with data from teensy
    actuator_positions_driver.actuator_1_position = actuator_positions_teensy.data[0];
    actuator_positions_driver.actuator_2_position = actuator_positions_teensy.data[1];
    actuator_positions_driver.actuator_3_position = actuator_positions_teensy.data[2];
    actuator_positions_driver.actuator_4_position = actuator_positions_teensy.data[3];
    actuator_positions_driver.actuator_5_position = actuator_positions_teensy.data[4];
    actuator_positions_driver.actuator_6_position = actuator_positions_teensy.data[5];
    actuator_positions_driver.servo_position = actuator_positions_teensy.data[6];
    //add the populated messagae to the higher level hexabot message
    hexabot_message.actuator_positions = actuator_positions_driver;
  }
  if(system_currents_teensy.data.size() == 9){
    //populate the system current dirver message with data from teensy
    system_currents_driver.actuator_1_current = system_currents_teensy.data[0];
    system_currents_driver.actuator_2_current = system_currents_teensy.data[1];
    system_currents_driver.actuator_3_current = system_currents_teensy.data[2];
    system_currents_driver.actuator_4_current = system_currents_teensy.data[3];
    system_currents_driver.actuator_5_current = system_currents_teensy.data[4];
    system_currents_driver.actuator_6_current = system_currents_teensy.data[5];
    system_currents_driver.servo_current = system_currents_teensy.data[6];
    system_currents_driver.system_current = system_currents_teensy.data[7];
    //add the populated message to the higher level hexabot message
    hexabot_message.currents = system_currents_driver;
  }
  if(system_temperatures_teensy.data.size() == 3){
    //populate the system cyrrent driver message with from teensy
    system_temperatures_driver.board_temp = system_temperatures_teensy.data[0];
    system_temperatures_driver.teensy_temp = system_temperatures_teensy.data[1];
    //add the populated message to the higher level heaxbot message
    hexabot_message.temperatures = system_temperatures_driver;
  }
  if(diagnostics_teensy.data.size() == 14){
    //populate the diagnostics driver message with data from teesny
    
    diagnostics_driver.actuator_1_power = diagnostics_teensy.data[0];
    diagnostics_driver.actuator_2_power = diagnostics_teensy.data[1];
    diagnostics_driver.actuator_3_power = diagnostics_teensy.data[2];
    diagnostics_driver.actuator_4_power = diagnostics_teensy.data[3];
    diagnostics_driver.actuator_5_power = diagnostics_teensy.data[4];
    diagnostics_driver.actuator_6_power = diagnostics_teensy.data[5];
    diagnostics_driver.servo_power = diagnostics_teensy.data[6];
    diagnostics_driver.main_power_status = diagnostics_teensy.data[7];
    diagnostics_driver.analog_switch_status = diagnostics_teensy.data[8];
    diagnostics_driver.estop_status = diagnostics_teensy.data[9];
    diagnostics_driver.voltage_translator_status = diagnostics_teensy.data[10];
    //add power led status
    //add communication led status
    //add the populated message to the higher level hexabot message
    hexabot_message.diagnostics = diagnostics_driver;
  }
}
