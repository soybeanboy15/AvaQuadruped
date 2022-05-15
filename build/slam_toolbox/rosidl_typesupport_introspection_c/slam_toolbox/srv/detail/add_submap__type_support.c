// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from slam_toolbox:srv\AddSubmap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "slam_toolbox/srv/detail/add_submap__rosidl_typesupport_introspection_c.h"
#include "slam_toolbox/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "slam_toolbox/srv/detail/add_submap__functions.h"
#include "slam_toolbox/srv/detail/add_submap__struct.h"


// Include directives for member types
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_toolbox__srv__AddSubmap_Request__init(message_memory);
}

void AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_fini_function(void * message_memory)
{
  slam_toolbox__srv__AddSubmap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_message_member_array[1] = {
  {
    "filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__srv__AddSubmap_Request, filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_message_members = {
  "slam_toolbox__srv",  // message namespace
  "AddSubmap_Request",  // message name
  1,  // number of fields
  sizeof(slam_toolbox__srv__AddSubmap_Request),
  AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_message_member_array,  // message members
  AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_message_type_support_handle = {
  0,
  &AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, AddSubmap_Request)() {
  if (!AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_message_type_support_handle.typesupport_identifier) {
    AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddSubmap_Request__rosidl_typesupport_introspection_c__AddSubmap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "slam_toolbox/srv/detail/add_submap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "slam_toolbox/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "slam_toolbox/srv/detail/add_submap__functions.h"
// already included above
// #include "slam_toolbox/srv/detail/add_submap__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_toolbox__srv__AddSubmap_Response__init(message_memory);
}

void AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_fini_function(void * message_memory)
{
  slam_toolbox__srv__AddSubmap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__srv__AddSubmap_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_message_members = {
  "slam_toolbox__srv",  // message namespace
  "AddSubmap_Response",  // message name
  1,  // number of fields
  sizeof(slam_toolbox__srv__AddSubmap_Response),
  AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_message_member_array,  // message members
  AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_message_type_support_handle = {
  0,
  &AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, AddSubmap_Response)() {
  if (!AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_message_type_support_handle.typesupport_identifier) {
    AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddSubmap_Response__rosidl_typesupport_introspection_c__AddSubmap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "slam_toolbox/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "slam_toolbox/srv/detail/add_submap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_service_members = {
  "slam_toolbox__srv",  // service namespace
  "AddSubmap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_Request_message_type_support_handle,
  NULL  // response message
  // slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_Response_message_type_support_handle
};

static rosidl_service_type_support_t slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_service_type_support_handle = {
  0,
  &slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, AddSubmap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, AddSubmap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_toolbox
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, AddSubmap)() {
  if (!slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_service_type_support_handle.typesupport_identifier) {
    slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, AddSubmap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, srv, AddSubmap_Response)()->data;
  }

  return &slam_toolbox__srv__detail__add_submap__rosidl_typesupport_introspection_c__AddSubmap_service_type_support_handle;
}
