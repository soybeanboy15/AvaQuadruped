// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ava_msgs:msg\AvaPose.idl
// generated code does not contain a copyright notice
#include "ava_msgs/msg/detail/ava_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ava_msgs__msg__AvaPose__init(ava_msgs__msg__AvaPose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  return true;
}

void
ava_msgs__msg__AvaPose__fini(ava_msgs__msg__AvaPose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
}

ava_msgs__msg__AvaPose *
ava_msgs__msg__AvaPose__create()
{
  ava_msgs__msg__AvaPose * msg = (ava_msgs__msg__AvaPose *)malloc(sizeof(ava_msgs__msg__AvaPose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ava_msgs__msg__AvaPose));
  bool success = ava_msgs__msg__AvaPose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ava_msgs__msg__AvaPose__destroy(ava_msgs__msg__AvaPose * msg)
{
  if (msg) {
    ava_msgs__msg__AvaPose__fini(msg);
  }
  free(msg);
}


bool
ava_msgs__msg__AvaPose__Sequence__init(ava_msgs__msg__AvaPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ava_msgs__msg__AvaPose * data = NULL;
  if (size) {
    data = (ava_msgs__msg__AvaPose *)calloc(size, sizeof(ava_msgs__msg__AvaPose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ava_msgs__msg__AvaPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ava_msgs__msg__AvaPose__fini(&data[i - 1]);
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
ava_msgs__msg__AvaPose__Sequence__fini(ava_msgs__msg__AvaPose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ava_msgs__msg__AvaPose__fini(&array->data[i]);
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

ava_msgs__msg__AvaPose__Sequence *
ava_msgs__msg__AvaPose__Sequence__create(size_t size)
{
  ava_msgs__msg__AvaPose__Sequence * array = (ava_msgs__msg__AvaPose__Sequence *)malloc(sizeof(ava_msgs__msg__AvaPose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ava_msgs__msg__AvaPose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ava_msgs__msg__AvaPose__Sequence__destroy(ava_msgs__msg__AvaPose__Sequence * array)
{
  if (array) {
    ava_msgs__msg__AvaPose__Sequence__fini(array);
  }
  free(array);
}
