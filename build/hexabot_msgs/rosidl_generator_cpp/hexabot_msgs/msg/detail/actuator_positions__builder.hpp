// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__BUILDER_HPP_
#define HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hexabot_msgs/msg/detail/actuator_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hexabot_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorPositions_servo_position
{
public:
  explicit Init_ActuatorPositions_servo_position(::hexabot_msgs::msg::ActuatorPositions & msg)
  : msg_(msg)
  {}
  ::hexabot_msgs::msg::ActuatorPositions servo_position(::hexabot_msgs::msg::ActuatorPositions::_servo_position_type arg)
  {
    msg_.servo_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hexabot_msgs::msg::ActuatorPositions msg_;
};

class Init_ActuatorPositions_actuator_6_position
{
public:
  explicit Init_ActuatorPositions_actuator_6_position(::hexabot_msgs::msg::ActuatorPositions & msg)
  : msg_(msg)
  {}
  Init_ActuatorPositions_servo_position actuator_6_position(::hexabot_msgs::msg::ActuatorPositions::_actuator_6_position_type arg)
  {
    msg_.actuator_6_position = std::move(arg);
    return Init_ActuatorPositions_servo_position(msg_);
  }

private:
  ::hexabot_msgs::msg::ActuatorPositions msg_;
};

class Init_ActuatorPositions_actuator_5_position
{
public:
  explicit Init_ActuatorPositions_actuator_5_position(::hexabot_msgs::msg::ActuatorPositions & msg)
  : msg_(msg)
  {}
  Init_ActuatorPositions_actuator_6_position actuator_5_position(::hexabot_msgs::msg::ActuatorPositions::_actuator_5_position_type arg)
  {
    msg_.actuator_5_position = std::move(arg);
    return Init_ActuatorPositions_actuator_6_position(msg_);
  }

private:
  ::hexabot_msgs::msg::ActuatorPositions msg_;
};

class Init_ActuatorPositions_actuator_4_position
{
public:
  explicit Init_ActuatorPositions_actuator_4_position(::hexabot_msgs::msg::ActuatorPositions & msg)
  : msg_(msg)
  {}
  Init_ActuatorPositions_actuator_5_position actuator_4_position(::hexabot_msgs::msg::ActuatorPositions::_actuator_4_position_type arg)
  {
    msg_.actuator_4_position = std::move(arg);
    return Init_ActuatorPositions_actuator_5_position(msg_);
  }

private:
  ::hexabot_msgs::msg::ActuatorPositions msg_;
};

class Init_ActuatorPositions_actuator_3_position
{
public:
  explicit Init_ActuatorPositions_actuator_3_position(::hexabot_msgs::msg::ActuatorPositions & msg)
  : msg_(msg)
  {}
  Init_ActuatorPositions_actuator_4_position actuator_3_position(::hexabot_msgs::msg::ActuatorPositions::_actuator_3_position_type arg)
  {
    msg_.actuator_3_position = std::move(arg);
    return Init_ActuatorPositions_actuator_4_position(msg_);
  }

private:
  ::hexabot_msgs::msg::ActuatorPositions msg_;
};

class Init_ActuatorPositions_actuator_2_position
{
public:
  explicit Init_ActuatorPositions_actuator_2_position(::hexabot_msgs::msg::ActuatorPositions & msg)
  : msg_(msg)
  {}
  Init_ActuatorPositions_actuator_3_position actuator_2_position(::hexabot_msgs::msg::ActuatorPositions::_actuator_2_position_type arg)
  {
    msg_.actuator_2_position = std::move(arg);
    return Init_ActuatorPositions_actuator_3_position(msg_);
  }

private:
  ::hexabot_msgs::msg::ActuatorPositions msg_;
};

class Init_ActuatorPositions_actuator_1_position
{
public:
  Init_ActuatorPositions_actuator_1_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorPositions_actuator_2_position actuator_1_position(::hexabot_msgs::msg::ActuatorPositions::_actuator_1_position_type arg)
  {
    msg_.actuator_1_position = std::move(arg);
    return Init_ActuatorPositions_actuator_2_position(msg_);
  }

private:
  ::hexabot_msgs::msg::ActuatorPositions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hexabot_msgs::msg::ActuatorPositions>()
{
  return hexabot_msgs::msg::builder::Init_ActuatorPositions_actuator_1_position();
}

}  // namespace hexabot_msgs

#endif  // HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__BUILDER_HPP_
