// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from slam_toolbox:srv\LoopClosure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "slam_toolbox/srv/detail/loop_closure__rosidl_typesupport_introspection_c.h"
#include "slam_toolbox/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "slam_toolbox/srv/detail/loop_closure__functions.h"
#include "slam_toolbox/srv/detail/loop_closure__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_toolbox__srv__LoopClosure_Request__init(message_memory);
}

void LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_fini_function(void * message_memory)
{
  slam_toolbox__srv__LoopClosure_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__srv__LoopClosure_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_message_members = {
  "slam_toolbox__srv",  // message namespace
  "LoopClosure_Request",  // message name
  1,  // number of fields
  sizeof(slam_toolbox__srv__LoopClosure_Request),
  LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_message_member_array,  // message members
  LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_message_type_support_handle = {
  0,
  &LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, LoopClosure_Request)() {
  if (!LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_message_type_support_handle.typesupport_identifier) {
    LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LoopClosure_Request__rosidl_typesupport_introspection_c__LoopClosure_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "slam_toolbox/srv/detail/loop_closure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "slam_toolbox/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "slam_toolbox/srv/detail/loop_closure__functions.h"
// already included above
// #include "slam_toolbox/srv/detail/loop_closure__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_toolbox__srv__LoopClosure_Response__init(message_memory);
}

void LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_fini_function(void * message_memory)
{
  slam_toolbox__srv__LoopClosure_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__srv__LoopClosure_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_message_members = {
  "slam_toolbox__srv",  // message namespace
  "LoopClosure_Response",  // message name
  1,  // number of fields
  sizeof(slam_toolbox__srv__LoopClosure_Response),
  LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_message_member_array,  // message members
  LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_message_type_support_handle = {
  0,
  &LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, LoopClosure_Response)() {
  if (!LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_message_type_support_handle.typesupport_identifier) {
    LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LoopClosure_Response__rosidl_typesupport_introspection_c__LoopClosure_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "slam_toolbox/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "slam_toolbox/srv/detail/loop_closure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_service_members = {
  "slam_toolbox__srv",  // service namespace
  "LoopClosure",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_Request_message_type_support_handle,
  NULL  // response message
  // slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_Response_message_type_support_handle
};

static rosidl_service_type_support_t slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_service_type_support_handle = {
  0,
  &slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, LoopClosure_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, LoopClosure_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_toolbox
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, LoopClosure)() {
  if (!slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_service_type_support_handle.typesupport_identifier) {
    slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, LoopClosure_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, LoopClosure_Response)()->data;
  }

  return &slam_toolbox__srv__detail__loop_closure__rosidl_typesupport_introspection_c__LoopClosure_service_type_support_handle;
}
