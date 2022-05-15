// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ava_msgs:msg/AvaInfo.idl
// generated code does not contain a copyright notice
#include "ava_msgs/msg/detail/ava_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `velocity`
#include "ava_msgs/msg/detail/velocity__functions.h"

bool
ava_msgs__msg__AvaInfo__init(ava_msgs__msg__AvaInfo * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    ava_msgs__msg__AvaInfo__fini(msg);
    return false;
  }
  // velocity
  if (!ava_msgs__msg__Velocity__init(&msg->velocity)) {
    ava_msgs__msg__AvaInfo__fini(msg);
    return false;
  }
  return true;
}

void
ava_msgs__msg__AvaInfo__fini(ava_msgs__msg__AvaInfo * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // velocity
  ava_msgs__msg__Velocity__fini(&msg->velocity);
}

ava_msgs__msg__AvaInfo *
ava_msgs__msg__AvaInfo__create()
{
  ava_msgs__msg__AvaInfo * msg = (ava_msgs__msg__AvaInfo *)malloc(sizeof(ava_msgs__msg__AvaInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ava_msgs__msg__AvaInfo));
  bool success = ava_msgs__msg__AvaInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ava_msgs__msg__AvaInfo__destroy(ava_msgs__msg__AvaInfo * msg)
{
  if (msg) {
    ava_msgs__msg__AvaInfo__fini(msg);
  }
  free(msg);
}


bool
ava_msgs__msg__AvaInfo__Sequence__init(ava_msgs__msg__AvaInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ava_msgs__msg__AvaInfo * data = NULL;
  if (size) {
    data = (ava_msgs__msg__AvaInfo *)calloc(size, sizeof(ava_msgs__msg__AvaInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ava_msgs__msg__AvaInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ava_msgs__msg__AvaInfo__fini(&data[i - 1]);
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
ava_msgs__msg__AvaInfo__Sequence__fini(ava_msgs__msg__AvaInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ava_msgs__msg__AvaInfo__fini(&array->data[i]);
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

ava_msgs__msg__AvaInfo__Sequence *
ava_msgs__msg__AvaInfo__Sequence__create(size_t size)
{
  ava_msgs__msg__AvaInfo__Sequence * array = (ava_msgs__msg__AvaInfo__Sequence *)malloc(sizeof(ava_msgs__msg__AvaInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ava_msgs__msg__AvaInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ava_msgs__msg__AvaInfo__Sequence__destroy(ava_msgs__msg__AvaInfo__Sequence * array)
{
  if (array) {
    ava_msgs__msg__AvaInfo__Sequence__fini(array);
  }
  free(array);
}
