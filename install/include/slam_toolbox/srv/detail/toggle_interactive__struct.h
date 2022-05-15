// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:srv\ToggleInteractive.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__STRUCT_H_
#define SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ToggleInteractive in the package slam_toolbox.
typedef struct slam_toolbox__srv__ToggleInteractive_Request
{
  uint8_t structure_needs_at_least_one_member;
} slam_toolbox__srv__ToggleInteractive_Request;

// Struct for a sequence of slam_toolbox__srv__ToggleInteractive_Request.
typedef struct slam_toolbox__srv__ToggleInteractive_Request__Sequence
{
  slam_toolbox__srv__ToggleInteractive_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__ToggleInteractive_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ToggleInteractive in the package slam_toolbox.
typedef struct slam_toolbox__srv__ToggleInteractive_Response
{
  uint8_t structure_needs_at_least_one_member;
} slam_toolbox__srv__ToggleInteractive_Response;

// Struct for a sequence of slam_toolbox__srv__ToggleInteractive_Response.
typedef struct slam_toolbox__srv__ToggleInteractive_Response__Sequence
{
  slam_toolbox__srv__ToggleInteractive_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__ToggleInteractive_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__STRUCT_H_
