// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hexabot_msgs/msg/detail/actuator_positions__rosidl_typesupport_introspection_c.h"
#include "hexabot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hexabot_msgs/msg/detail/actuator_positions__functions.h"
#include "hexabot_msgs/msg/detail/actuator_positions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hexabot_msgs__msg__ActuatorPositions__init(message_memory);
}

void hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_fini_function(void * message_memory)
{
  hexabot_msgs__msg__ActuatorPositions__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_member_array[7] = {
  {
    "actuator_1_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hexabot_msgs__msg__ActuatorPositions, actuator_1_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuator_2_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hexabot_msgs__msg__ActuatorPositions, actuator_2_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuator_3_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hexabot_msgs__msg__ActuatorPositions, actuator_3_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuator_4_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hexabot_msgs__msg__ActuatorPositions, actuator_4_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuator_5_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hexabot_msgs__msg__ActuatorPositions, actuator_5_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuator_6_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hexabot_msgs__msg__ActuatorPositions, actuator_6_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hexabot_msgs__msg__ActuatorPositions, servo_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_members = {
  "hexabot_msgs__msg",  // message namespace
  "ActuatorPositions",  // message name
  7,  // number of fields
  sizeof(hexabot_msgs__msg__ActuatorPositions),
  hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_member_array,  // message members
  hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_init_function,  // function to initialize message memory (memory has to be allocated)
  hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_type_support_handle = {
  0,
  &hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hexabot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hexabot_msgs, msg, ActuatorPositions)() {
  if (!hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_type_support_handle.typesupport_identifier) {
    hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hexabot_msgs__msg__ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
