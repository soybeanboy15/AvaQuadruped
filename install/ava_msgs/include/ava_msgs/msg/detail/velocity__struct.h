// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ava_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_
#define AVA_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Velocity in the package ava_msgs.
typedef struct ava_msgs__msg__Velocity
{
  double linear_x;
  double linear_y;
  double linear_z;
  double angular_x;
  double angular_y;
  double angular_z;
} ava_msgs__msg__Velocity;

// Struct for a sequence of ava_msgs__msg__Velocity.
typedef struct ava_msgs__msg__Velocity__Sequence
{
  ava_msgs__msg__Velocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ava_msgs__msg__Velocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AVA_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_
