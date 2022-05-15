// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ava_msgs:msg\AvaCommand.idl
// generated code does not contain a copyright notice
#include "ava_msgs/msg/detail/ava_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `state_msg`
// Member `teleop`
// Member `keyhit`
#include "rosidl_runtime_c/string_functions.h"

bool
ava_msgs__msg__AvaCommand__init(ava_msgs__msg__AvaCommand * msg)
{
  if (!msg) {
    return false;
  }
  // state_msg
  if (!rosidl_runtime_c__String__init(&msg->state_msg)) {
    ava_msgs__msg__AvaCommand__fini(msg);
    return false;
  }
  // teleop
  if (!rosidl_runtime_c__String__init(&msg->teleop)) {
    ava_msgs__msg__AvaCommand__fini(msg);
    return false;
  }
  // keyhit
  if (!rosidl_runtime_c__String__init(&msg->keyhit)) {
    ava_msgs__msg__AvaCommand__fini(msg);
    return false;
  }
  return true;
}

void
ava_msgs__msg__AvaCommand__fini(ava_msgs__msg__AvaCommand * msg)
{
  if (!msg) {
    return;
  }
  // state_msg
  rosidl_runtime_c__String__fini(&msg->state_msg);
  // teleop
  rosidl_runtime_c__String__fini(&msg->teleop);
  // keyhit
  rosidl_runtime_c__String__fini(&msg->keyhit);
}

ava_msgs__msg__AvaCommand *
ava_msgs__msg__AvaCommand__create()
{
  ava_msgs__msg__AvaCommand * msg = (ava_msgs__msg__AvaCommand *)malloc(sizeof(ava_msgs__msg__AvaCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ava_msgs__msg__AvaCommand));
  bool success = ava_msgs__msg__AvaCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ava_msgs__msg__AvaCommand__destroy(ava_msgs__msg__AvaCommand * msg)
{
  if (msg) {
    ava_msgs__msg__AvaCommand__fini(msg);
  }
  free(msg);
}


bool
ava_msgs__msg__AvaCommand__Sequence__init(ava_msgs__msg__AvaCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ava_msgs__msg__AvaCommand * data = NULL;
  if (size) {
    data = (ava_msgs__msg__AvaCommand *)calloc(size, sizeof(ava_msgs__msg__AvaCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ava_msgs__msg__AvaCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ava_msgs__msg__AvaCommand__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ava_msgs__msg__AvaCommand__Sequence__fini(ava_msgs__msg__AvaCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ava_msgs__msg__AvaCommand__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ava_msgs__msg__AvaCommand__Sequence *
ava_msgs__msg__AvaCommand__Sequence__create(size_t size)
{
  ava_msgs__msg__AvaCommand__Sequence * array = (ava_msgs__msg__AvaCommand__Sequence *)malloc(sizeof(ava_msgs__msg__AvaCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ava_msgs__msg__AvaCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ava_msgs__msg__AvaCommand__Sequence__destroy(ava_msgs__msg__AvaCommand__Sequence * array)
{
  if (array) {
    ava_msgs__msg__AvaCommand__Sequence__fini(array);
  }
  free(array);
}
