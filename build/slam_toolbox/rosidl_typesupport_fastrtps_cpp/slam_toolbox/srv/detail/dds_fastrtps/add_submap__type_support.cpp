// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from slam_toolbox:srv\AddSubmap.idl
// generated code does not contain a copyright notice
#include "slam_toolbox/srv/detail/add_submap__rosidl_typesupport_fastrtps_cpp.hpp"
#include "slam_toolbox/srv/detail/add_submap__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace slam_toolbox
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_slam_toolbox
cdr_serialize(
  const slam_toolbox::srv::AddSubmap_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: filename
  cdr << ros_message.filename;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_slam_toolbox
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  slam_toolbox::srv::AddSubmap_Request & ros_message)
{
  // Member: filename
  cdr >> ros_message.filename;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_slam_toolbox
get_serialized_size(
  const slam_toolbox::srv::AddSubmap_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.filename.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_slam_toolbox
max_serialized_size_AddSubmap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: filename
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

static bool _AddSubmap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const slam_toolbox::srv::AddSubmap_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddSubmap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<slam_toolbox::srv::AddSubmap_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddSubmap_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const slam_toolbox::srv::AddSubmap_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddSubmap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddSubmap_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AddSubmap_Request__callbacks = {
  "slam_toolbox::srv",
  "AddSubmap_Request",
  _AddSubmap_Request__cdr_serialize,
  _AddSubmap_Request__cdr_deserialize,
  _AddSubmap_Request__get_serialized_size,
  _AddSubmap_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddSubmap_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddSubmap_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace slam_toolbox

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_slam_toolbox
const rosidl_message_type_support_t *
get_message_type_support_handle<slam_toolbox::srv::AddSubmap_Request>()
{
  return &slam_toolbox::srv::typesupport_fastrtps_cpp::_AddSubmap_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, AddSubmap_Request)() {
  return &slam_toolbox::srv::typesupport_fastrtps_cpp::_AddSubmap_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace slam_toolbox
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_slam_toolbox
cdr_serialize(
  const slam_toolbox::srv::AddSubmap_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_slam_toolbox
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  slam_toolbox::srv::AddSubmap_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_slam_toolbox
get_serialized_size(
  const slam_toolbox::srv::AddSubmap_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_slam_toolbox
max_serialized_size_AddSubmap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AddSubmap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const slam_toolbox::srv::AddSubmap_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddSubmap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<slam_toolbox::srv::AddSubmap_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddSubmap_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const slam_toolbox::srv::AddSubmap_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddSubmap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddSubmap_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AddSubmap_Response__callbacks = {
  "slam_toolbox::srv",
  "AddSubmap_Response",
  _AddSubmap_Response__cdr_serialize,
  _AddSubmap_Response__cdr_deserialize,
  _AddSubmap_Response__get_serialized_size,
  _AddSubmap_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddSubmap_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddSubmap_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace slam_toolbox

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_slam_toolbox
const rosidl_message_type_support_t *
get_message_type_support_handle<slam_toolbox::srv::AddSubmap_Response>()
{
  return &slam_toolbox::srv::typesupport_fastrtps_cpp::_AddSubmap_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, AddSubmap_Response)() {
  return &slam_toolbox::srv::typesupport_fastrtps_cpp::_AddSubmap_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace slam_toolbox
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _AddSubmap__callbacks = {
  "slam_toolbox::srv",
  "AddSubmap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, AddSubmap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, AddSubmap_Response)(),
};

static rosidl_service_type_support_t _AddSubmap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddSubmap__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace slam_toolbox

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_slam_toolbox
const rosidl_service_type_support_t *
get_service_type_support_handle<slam_toolbox::srv::AddSubmap>()
{
  return &slam_toolbox::srv::typesupport_fastrtps_cpp::_AddSubmap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, slam_toolbox, srv, AddSubmap)() {
  return &slam_toolbox::srv::typesupport_fastrtps_cpp::_AddSubmap__handle;
}

#ifdef __cplusplus
}
#endif
