// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ava_msgs:msg/AvaCommand.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_COMMAND__STRUCT_H_
#define AVA_MSGS__MSG__DETAIL__AVA_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state_msg'
// Member 'teleop_mode'
#include "rosidl_runtime_c/string.h"
// Member 'velocity'
#include "ava_msgs/msg/detail/velocity__struct.h"
// Member 'pose'
#include "ava_msgs/msg/detail/ava_pose__struct.h"

// Struct defined in msg/AvaCommand in the package ava_msgs.
typedef struct ava_msgs__msg__AvaCommand
{
  rosidl_runtime_c__String state_msg;
  rosidl_runtime_c__String teleop_mode;
  ava_msgs__msg__Velocity velocity;
  ava_msgs__msg__AvaPose pose;
} ava_msgs__msg__AvaCommand;

// Struct for a sequence of ava_msgs__msg__AvaCommand.
typedef struct ava_msgs__msg__AvaCommand__Sequence
{
  ava_msgs__msg__AvaCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ava_msgs__msg__AvaCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AVA_MSGS__MSG__DETAIL__AVA_COMMAND__STRUCT_H_
