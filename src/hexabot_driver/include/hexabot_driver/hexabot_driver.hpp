#include <memory>
#include <chrono>
#include <functional>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"
#include "std_msgs/msg/u_int8_multi_array.hpp"
#include "std_msgs/msg/empty.hpp"
#include "hexabot_msgs/msg/hexabot.hpp"
#include "hexabot_msgs/msg/system_currents.hpp"
#include "hexabot_msgs/msg/system_temperatures.hpp"
#include "hexabot_msgs/msg/actuator_positions.hpp"
#include "hexabot_msgs/msg/diagnostics.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;
class hexabot_driver : public rclcpp::Node
{
  public:
    hexabot_driver();
    void formate_hexabot_message();
  private:
    std_msgs::msg::Float32MultiArray actuator_positions_teensy;
    std_msgs::msg::Float32MultiArray system_currents_teensy;
    std_msgs::msg::Float32MultiArray system_temperatures_teensy ;
    std_msgs::msg::UInt8MultiArray diagnostics_teensy;
    hexabot_msgs::msg::Hexabot hexabot_message;
    hexabot_msgs::msg::ActuatorPositions actuator_positions_driver;
    hexabot_msgs::msg::Diagnostics diagnostics_driver;
    hexabot_msgs::msg::SystemCurrents system_currents_driver;
    hexabot_msgs::msg::SystemTemperatures system_temperatures_driver;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr actuator_positions_subscriber;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr system_currents_subscriber;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr system_temperatures_subscriber;
    rclcpp::Subscription<std_msgs::msg::UInt8MultiArray>::SharedPtr diagnostics_subscriber;
    rclcpp::Publisher<hexabot_msgs::msg::Hexabot>::SharedPtr hexabot_message_publisher;
    rclcpp::Publisher<std_msgs::msg::Empty>::SharedPtr heart_beat_publisher;
    rclcpp::TimerBase::SharedPtr hexabot_message_timer;
    rclcpp::TimerBase::SharedPtr heart_beat_timer;
    size_t count;

    void heart_beat_timer_callback();
    void hexabot_message_timer_callback();
    void actuator_positions_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg);
    void system_currents_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg);
    void system_temperatures_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg);
    void diagnostics_callback(const std_msgs::msg::UInt8MultiArray::SharedPtr msg);
};
