// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ava_msgs:msg/AvaCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ava_msgs/msg/detail/ava_command__struct.hpp"
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

void AvaCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ava_msgs::msg::AvaCommand(_init);
}

void AvaCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ava_msgs::msg::AvaCommand *>(message_memory);
  typed_message->~AvaCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AvaCommand_message_member_array[3] = {
  {
    "state_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::AvaCommand, state_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "teleop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::AvaCommand, teleop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "keyhit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::AvaCommand, keyhit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AvaCommand_message_members = {
  "ava_msgs::msg",  // message namespace
  "AvaCommand",  // message name
  3,  // number of fields
  sizeof(ava_msgs::msg::AvaCommand),
  AvaCommand_message_member_array,  // message members
  AvaCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  AvaCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AvaCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AvaCommand_message_members,
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
get_message_type_support_handle<ava_msgs::msg::AvaCommand>()
{
  return &::ava_msgs::msg::rosidl_typesupport_introspection_cpp::AvaCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ava_msgs, msg, AvaCommand)() {
  return &::ava_msgs::msg::rosidl_typesupport_introspection_cpp::AvaCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
