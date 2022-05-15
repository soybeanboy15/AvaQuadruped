// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ava_msgs:msg\LegPosition.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_H_
#define AVA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fl_leg_pos'
// Member 'fr_leg_pos'
// Member 'br_leg_pos'
// Member 'bl_leg_pos'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LegPosition in the package ava_msgs.
typedef struct ava_msgs__msg__LegPosition
{
  rosidl_runtime_c__float__Sequence fl_leg_pos;
  rosidl_runtime_c__float__Sequence fr_leg_pos;
  rosidl_runtime_c__float__Sequence br_leg_pos;
  rosidl_runtime_c__float__Sequence bl_leg_pos;
} ava_msgs__msg__LegPosition;

// Struct for a sequence of ava_msgs__msg__LegPosition.
typedef struct ava_msgs__msg__LegPosition__Sequence
{
  ava_msgs__msg__LegPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ava_msgs__msg__LegPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AVA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_H_
