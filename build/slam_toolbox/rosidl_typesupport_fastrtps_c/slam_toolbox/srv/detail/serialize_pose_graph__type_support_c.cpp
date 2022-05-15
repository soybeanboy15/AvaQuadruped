// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from slam_toolbox:srv\SerializePoseGraph.idl
// generated code does not contain a copyright notice
#include "slam_toolbox/srv/detail/serialize_pose_graph__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "slam_toolbox/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "slam_toolbox/srv/detail/serialize_pose_graph__struct.h"
#include "slam_toolbox/srv/detail/serialize_pose_graph__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // filename
#include "rosidl_runtime_c/string_functions.h"  // filename

// forward declare type support functions


using _SerializePoseGraph_Request__ros_msg_type = slam_toolbox__srv__SerializePoseGraph_Request;

static bool _SerializePoseGraph_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SerializePoseGraph_Request__ros_msg_type * ros_message = static_cast<const _SerializePoseGraph_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    const rosidl_runtime_c__String * str = &ros_message->filename;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SerializePoseGraph_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SerializePoseGraph_Request__ros_msg_type * ros_message = static_cast<_SerializePoseGraph_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filename.data) {
      rosidl_runtime_c__String__init(&ros_message->filename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filename'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t get_serialized_size_slam_toolbox__srv__SerializePoseGraph_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SerializePoseGraph_Request__ros_msg_type * ros_message = static_cast<const _SerializePoseGraph_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filename.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SerializePoseGraph_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_slam_toolbox__srv__SerializePoseGraph_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t max_serialized_size_slam_toolbox__srv__SerializePoseGraph_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SerializePoseGraph_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_slam_toolbox__srv__SerializePoseGraph_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SerializePoseGraph_Request = {
  "slam_toolbox::srv",
  "SerializePoseGraph_Request",
  _SerializePoseGraph_Request__cdr_serialize,
  _SerializePoseGraph_Request__cdr_deserialize,
  _SerializePoseGraph_Request__get_serialized_size,
  _SerializePoseGraph_Request__max_serialized_size
};

static rosidl_message_type_support_t _SerializePoseGraph_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SerializePoseGraph_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_toolbox, srv, SerializePoseGraph_Request)() {
  return &_SerializePoseGraph_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "slam_toolbox/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "slam_toolbox/srv/detail/serialize_pose_graph__struct.h"
// already included above
// #include "slam_toolbox/srv/detail/serialize_pose_graph__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SerializePoseGraph_Response__ros_msg_type = slam_toolbox__srv__SerializePoseGraph_Response;

static bool _SerializePoseGraph_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SerializePoseGraph_Response__ros_msg_type * ros_message = static_cast<const _SerializePoseGraph_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _SerializePoseGraph_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SerializePoseGraph_Response__ros_msg_type * ros_message = static_cast<_SerializePoseGraph_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t get_serialized_size_slam_toolbox__srv__SerializePoseGraph_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SerializePoseGraph_Response__ros_msg_type * ros_message = static_cast<const _SerializePoseGraph_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SerializePoseGraph_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_slam_toolbox__srv__SerializePoseGraph_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t max_serialized_size_slam_toolbox__srv__SerializePoseGraph_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SerializePoseGraph_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_slam_toolbox__srv__SerializePoseGraph_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SerializePoseGraph_Response = {
  "slam_toolbox::srv",
  "SerializePoseGraph_Response",
  _SerializePoseGraph_Response__cdr_serialize,
  _SerializePoseGraph_Response__cdr_deserialize,
  _SerializePoseGraph_Response__get_serialized_size,
  _SerializePoseGraph_Response__max_serialized_size
};

static rosidl_message_type_support_t _SerializePoseGraph_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SerializePoseGraph_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_toolbox, srv, SerializePoseGraph_Response)() {
  return &_SerializePoseGraph_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "slam_toolbox/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "slam_toolbox/srv/serialize_pose_graph.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SerializePoseGraph__callbacks = {
  "slam_toolbox::srv",
  "SerializePoseGraph",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_toolbox, srv, SerializePoseGraph_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_toolbox, srv, SerializePoseGraph_Response)(),
};

static rosidl_service_type_support_t SerializePoseGraph__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SerializePoseGraph__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_toolbox, srv, SerializePoseGraph)() {
  return &SerializePoseGraph__handle;
}

#if defined(__cplusplus)
}
#endif
