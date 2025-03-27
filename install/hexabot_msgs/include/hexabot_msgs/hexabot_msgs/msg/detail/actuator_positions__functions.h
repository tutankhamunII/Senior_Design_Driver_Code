// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__FUNCTIONS_H_
#define HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hexabot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hexabot_msgs/msg/detail/actuator_positions__struct.h"

/// Initialize msg/ActuatorPositions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hexabot_msgs__msg__ActuatorPositions
 * )) before or use
 * hexabot_msgs__msg__ActuatorPositions__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
bool
hexabot_msgs__msg__ActuatorPositions__init(hexabot_msgs__msg__ActuatorPositions * msg);

/// Finalize msg/ActuatorPositions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
void
hexabot_msgs__msg__ActuatorPositions__fini(hexabot_msgs__msg__ActuatorPositions * msg);

/// Create msg/ActuatorPositions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hexabot_msgs__msg__ActuatorPositions__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
hexabot_msgs__msg__ActuatorPositions *
hexabot_msgs__msg__ActuatorPositions__create();

/// Destroy msg/ActuatorPositions message.
/**
 * It calls
 * hexabot_msgs__msg__ActuatorPositions__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
void
hexabot_msgs__msg__ActuatorPositions__destroy(hexabot_msgs__msg__ActuatorPositions * msg);

/// Check for msg/ActuatorPositions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
bool
hexabot_msgs__msg__ActuatorPositions__are_equal(const hexabot_msgs__msg__ActuatorPositions * lhs, const hexabot_msgs__msg__ActuatorPositions * rhs);

/// Copy a msg/ActuatorPositions message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
bool
hexabot_msgs__msg__ActuatorPositions__copy(
  const hexabot_msgs__msg__ActuatorPositions * input,
  hexabot_msgs__msg__ActuatorPositions * output);

/// Initialize array of msg/ActuatorPositions messages.
/**
 * It allocates the memory for the number of elements and calls
 * hexabot_msgs__msg__ActuatorPositions__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
bool
hexabot_msgs__msg__ActuatorPositions__Sequence__init(hexabot_msgs__msg__ActuatorPositions__Sequence * array, size_t size);

/// Finalize array of msg/ActuatorPositions messages.
/**
 * It calls
 * hexabot_msgs__msg__ActuatorPositions__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
void
hexabot_msgs__msg__ActuatorPositions__Sequence__fini(hexabot_msgs__msg__ActuatorPositions__Sequence * array);

/// Create array of msg/ActuatorPositions messages.
/**
 * It allocates the memory for the array and calls
 * hexabot_msgs__msg__ActuatorPositions__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
hexabot_msgs__msg__ActuatorPositions__Sequence *
hexabot_msgs__msg__ActuatorPositions__Sequence__create(size_t size);

/// Destroy array of msg/ActuatorPositions messages.
/**
 * It calls
 * hexabot_msgs__msg__ActuatorPositions__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
void
hexabot_msgs__msg__ActuatorPositions__Sequence__destroy(hexabot_msgs__msg__ActuatorPositions__Sequence * array);

/// Check for msg/ActuatorPositions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
bool
hexabot_msgs__msg__ActuatorPositions__Sequence__are_equal(const hexabot_msgs__msg__ActuatorPositions__Sequence * lhs, const hexabot_msgs__msg__ActuatorPositions__Sequence * rhs);

/// Copy an array of msg/ActuatorPositions messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hexabot_msgs
bool
hexabot_msgs__msg__ActuatorPositions__Sequence__copy(
  const hexabot_msgs__msg__ActuatorPositions__Sequence * input,
  hexabot_msgs__msg__ActuatorPositions__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__FUNCTIONS_H_
