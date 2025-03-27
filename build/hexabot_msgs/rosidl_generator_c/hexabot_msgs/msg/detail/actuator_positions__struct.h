// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__STRUCT_H_
#define HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ActuatorPositions in the package hexabot_msgs.
typedef struct hexabot_msgs__msg__ActuatorPositions
{
  float actuator_1_position;
  float actuator_2_position;
  float actuator_3_position;
  float actuator_4_position;
  float actuator_5_position;
  float actuator_6_position;
  float servo_position;
} hexabot_msgs__msg__ActuatorPositions;

// Struct for a sequence of hexabot_msgs__msg__ActuatorPositions.
typedef struct hexabot_msgs__msg__ActuatorPositions__Sequence
{
  hexabot_msgs__msg__ActuatorPositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hexabot_msgs__msg__ActuatorPositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__STRUCT_H_
