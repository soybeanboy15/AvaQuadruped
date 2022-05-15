// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:srv\LoopClosure.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__STRUCT_H_
#define SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/LoopClosure in the package slam_toolbox.
typedef struct slam_toolbox__srv__LoopClosure_Request
{
  uint8_t structure_needs_at_least_one_member;
} slam_toolbox__srv__LoopClosure_Request;

// Struct for a sequence of slam_toolbox__srv__LoopClosure_Request.
typedef struct slam_toolbox__srv__LoopClosure_Request__Sequence
{
  slam_toolbox__srv__LoopClosure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__LoopClosure_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/LoopClosure in the package slam_toolbox.
typedef struct slam_toolbox__srv__LoopClosure_Response
{
  uint8_t structure_needs_at_least_one_member;
} slam_toolbox__srv__LoopClosure_Response;

// Struct for a sequence of slam_toolbox__srv__LoopClosure_Response.
typedef struct slam_toolbox__srv__LoopClosure_Response__Sequence
{
  slam_toolbox__srv__LoopClosure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__LoopClosure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__STRUCT_H_
