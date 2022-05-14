// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ava_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice
#include "ava_msgs/msg/detail/leg_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `fl_leg_pos`
// Member `fr_leg_pos`
// Member `br_leg_pos`
// Member `bl_leg_pos`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ava_msgs__msg__LegPosition__init(ava_msgs__msg__LegPosition * msg)
{
  if (!msg) {
    return false;
  }
  // fl_leg_pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fl_leg_pos, 0)) {
    ava_msgs__msg__LegPosition__fini(msg);
    return false;
  }
  // fr_leg_pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fr_leg_pos, 0)) {
    ava_msgs__msg__LegPosition__fini(msg);
    return false;
  }
  // br_leg_pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->br_leg_pos, 0)) {
    ava_msgs__msg__LegPosition__fini(msg);
    return false;
  }
  // bl_leg_pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->bl_leg_pos, 0)) {
    ava_msgs__msg__LegPosition__fini(msg);
    return false;
  }
  return true;
}

void
ava_msgs__msg__LegPosition__fini(ava_msgs__msg__LegPosition * msg)
{
  if (!msg) {
    return;
  }
  // fl_leg_pos
  rosidl_runtime_c__float__Sequence__fini(&msg->fl_leg_pos);
  // fr_leg_pos
  rosidl_runtime_c__float__Sequence__fini(&msg->fr_leg_pos);
  // br_leg_pos
  rosidl_runtime_c__float__Sequence__fini(&msg->br_leg_pos);
  // bl_leg_pos
  rosidl_runtime_c__float__Sequence__fini(&msg->bl_leg_pos);
}

ava_msgs__msg__LegPosition *
ava_msgs__msg__LegPosition__create()
{
  ava_msgs__msg__LegPosition * msg = (ava_msgs__msg__LegPosition *)malloc(sizeof(ava_msgs__msg__LegPosition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ava_msgs__msg__LegPosition));
  bool success = ava_msgs__msg__LegPosition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ava_msgs__msg__LegPosition__destroy(ava_msgs__msg__LegPosition * msg)
{
  if (msg) {
    ava_msgs__msg__LegPosition__fini(msg);
  }
  free(msg);
}


bool
ava_msgs__msg__LegPosition__Sequence__init(ava_msgs__msg__LegPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ava_msgs__msg__LegPosition * data = NULL;
  if (size) {
    data = (ava_msgs__msg__LegPosition *)calloc(size, sizeof(ava_msgs__msg__LegPosition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ava_msgs__msg__LegPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ava_msgs__msg__LegPosition__fini(&data[i - 1]);
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
ava_msgs__msg__LegPosition__Sequence__fini(ava_msgs__msg__LegPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ava_msgs__msg__LegPosition__fini(&array->data[i]);
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

ava_msgs__msg__LegPosition__Sequence *
ava_msgs__msg__LegPosition__Sequence__create(size_t size)
{
  ava_msgs__msg__LegPosition__Sequence * array = (ava_msgs__msg__LegPosition__Sequence *)malloc(sizeof(ava_msgs__msg__LegPosition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ava_msgs__msg__LegPosition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ava_msgs__msg__LegPosition__Sequence__destroy(ava_msgs__msg__LegPosition__Sequence * array)
{
  if (array) {
    ava_msgs__msg__LegPosition__Sequence__fini(array);
  }
  free(array);
}
