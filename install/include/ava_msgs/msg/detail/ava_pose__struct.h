// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ava_msgs:msg\AvaPose.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_POSE__STRUCT_H_
#define AVA_MSGS__MSG__DETAIL__AVA_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AvaPose in the package ava_msgs.
typedef struct ava_msgs__msg__AvaPose
{
  float x;
  float y;
  float z;
  float roll;
  float pitch;
  float yaw;
} ava_msgs__msg__AvaPose;

// Struct for a sequence of ava_msgs__msg__AvaPose.
typedef struct ava_msgs__msg__AvaPose__Sequence
{
  ava_msgs__msg__AvaPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ava_msgs__msg__AvaPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AVA_MSGS__MSG__DETAIL__AVA_POSE__STRUCT_H_
