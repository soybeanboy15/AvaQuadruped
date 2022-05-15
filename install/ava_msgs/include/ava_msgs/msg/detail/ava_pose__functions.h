// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ava_msgs:msg/AvaPose.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_POSE__FUNCTIONS_H_
#define AVA_MSGS__MSG__DETAIL__AVA_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ava_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ava_msgs/msg/detail/ava_pose__struct.h"

/// Initialize msg/AvaPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ava_msgs__msg__AvaPose
 * )) before or use
 * ava_msgs__msg__AvaPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ava_msgs
bool
ava_msgs__msg__AvaPose__init(ava_msgs__msg__AvaPose * msg);

/// Finalize msg/AvaPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ava_msgs
void
ava_msgs__msg__AvaPose__fini(ava_msgs__msg__AvaPose * msg);

/// Create msg/AvaPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ava_msgs__msg__AvaPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ava_msgs
ava_msgs__msg__AvaPose *
ava_msgs__msg__AvaPose__create();

/// Destroy msg/AvaPose message.
/**
 * It calls
 * ava_msgs__msg__AvaPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ava_msgs
void
ava_msgs__msg__AvaPose__destroy(ava_msgs__msg__AvaPose * msg);


/// Initialize array of msg/AvaPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * ava_msgs__msg__AvaPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ava_msgs
bool
ava_msgs__msg__AvaPose__Sequence__init(ava_msgs__msg__AvaPose__Sequence * array, size_t size);

/// Finalize array of msg/AvaPose messages.
/**
 * It calls
 * ava_msgs__msg__AvaPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ava_msgs
void
ava_msgs__msg__AvaPose__Sequence__fini(ava_msgs__msg__AvaPose__Sequence * array);

/// Create array of msg/AvaPose messages.
/**
 * It allocates the memory for the array and calls
 * ava_msgs__msg__AvaPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ava_msgs
ava_msgs__msg__AvaPose__Sequence *
ava_msgs__msg__AvaPose__Sequence__create(size_t size);

/// Destroy array of msg/AvaPose messages.
/**
 * It calls
 * ava_msgs__msg__AvaPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ava_msgs
void
ava_msgs__msg__AvaPose__Sequence__destroy(ava_msgs__msg__AvaPose__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AVA_MSGS__MSG__DETAIL__AVA_POSE__FUNCTIONS_H_
