// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ava_msgs:msg\AvaInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ava_msgs/msg/detail/ava_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ava_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AvaInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ava_msgs::msg::AvaInfo(_init);
}

void AvaInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ava_msgs::msg::AvaInfo *>(message_memory);
  typed_message->~AvaInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AvaInfo_message_member_array[2] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::AvaInfo, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ava_msgs::msg::Velocity>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::AvaInfo, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AvaInfo_message_members = {
  "ava_msgs::msg",  // message namespace
  "AvaInfo",  // message name
  2,  // number of fields
  sizeof(ava_msgs::msg::AvaInfo),
  AvaInfo_message_member_array,  // message members
  AvaInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  AvaInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AvaInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AvaInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ava_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ava_msgs::msg::AvaInfo>()
{
  return &::ava_msgs::msg::rosidl_typesupport_introspection_cpp::AvaInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ava_msgs, msg, AvaInfo)() {
  return &::ava_msgs::msg::rosidl_typesupport_introspection_cpp::AvaInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
