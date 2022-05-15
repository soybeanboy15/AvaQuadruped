// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:srv\DeserializePoseGraph.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__STRUCT_H_
#define SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNSET'.
enum
{
  slam_toolbox__srv__DeserializePoseGraph_Request__UNSET = 0
};

/// Constant 'START_AT_FIRST_NODE'.
enum
{
  slam_toolbox__srv__DeserializePoseGraph_Request__START_AT_FIRST_NODE = 1
};

/// Constant 'START_AT_GIVEN_POSE'.
enum
{
  slam_toolbox__srv__DeserializePoseGraph_Request__START_AT_GIVEN_POSE = 2
};

/// Constant 'LOCALIZE_AT_POSE'.
enum
{
  slam_toolbox__srv__DeserializePoseGraph_Request__LOCALIZE_AT_POSE = 3
};

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

// Struct defined in srv/DeserializePoseGraph in the package slam_toolbox.
typedef struct slam_toolbox__srv__DeserializePoseGraph_Request
{
  rosidl_runtime_c__String filename;
  int8_t match_type;
  geometry_msgs__msg__Pose2D initial_pose;
} slam_toolbox__srv__DeserializePoseGraph_Request;

// Struct for a sequence of slam_toolbox__srv__DeserializePoseGraph_Request.
typedef struct slam_toolbox__srv__DeserializePoseGraph_Request__Sequence
{
  slam_toolbox__srv__DeserializePoseGraph_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__DeserializePoseGraph_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DeserializePoseGraph in the package slam_toolbox.
typedef struct slam_toolbox__srv__DeserializePoseGraph_Response
{
  uint8_t structure_needs_at_least_one_member;
} slam_toolbox__srv__DeserializePoseGraph_Response;

// Struct for a sequence of slam_toolbox__srv__DeserializePoseGraph_Response.
typedef struct slam_toolbox__srv__DeserializePoseGraph_Response__Sequence
{
  slam_toolbox__srv__DeserializePoseGraph_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__srv__DeserializePoseGraph_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__STRUCT_H_
