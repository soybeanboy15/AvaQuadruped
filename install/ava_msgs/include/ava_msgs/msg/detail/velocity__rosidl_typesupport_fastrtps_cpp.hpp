// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ava_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__VELOCITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AVA_MSGS__MSG__DETAIL__VELOCITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ava_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ava_msgs/msg/detail/velocity__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace ava_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
cdr_serialize(
  const ava_msgs::msg::Velocity & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ava_msgs::msg::Velocity & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
get_serialized_size(
  const ava_msgs::msg::Velocity & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
max_serialized_size_Velocity(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ava_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ava_msgs, msg, Velocity)();

#ifdef __cplusplus
}
#endif

#endif  // AVA_MSGS__MSG__DETAIL__VELOCITY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
