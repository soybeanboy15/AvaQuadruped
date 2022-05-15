// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ava_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice
#include "ava_msgs/msg/detail/velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ava_msgs__msg__Velocity__init(ava_msgs__msg__Velocity * msg)
{
  if (!msg) {
    return false;
  }
  // linear_x
  // linear_y
  // linear_z
  // angular_x
  // angular_y
  // angular_z
  return true;
}

void
ava_msgs__msg__Velocity__fini(ava_msgs__msg__Velocity * msg)
{
  if (!msg) {
    return;
  }
  // linear_x
  // linear_y
  // linear_z
  // angular_x
  // angular_y
  // angular_z
}

ava_msgs__msg__Velocity *
ava_msgs__msg__Velocity__create()
{
  ava_msgs__msg__Velocity * msg = (ava_msgs__msg__Velocity *)malloc(sizeof(ava_msgs__msg__Velocity));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ava_msgs__msg__Velocity));
  bool success = ava_msgs__msg__Velocity__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ava_msgs__msg__Velocity__destroy(ava_msgs__msg__Velocity * msg)
{
  if (msg) {
    ava_msgs__msg__Velocity__fini(msg);
  }
  free(msg);
}


bool
ava_msgs__msg__Velocity__Sequence__init(ava_msgs__msg__Velocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ava_msgs__msg__Velocity * data = NULL;
  if (size) {
    data = (ava_msgs__msg__Velocity *)calloc(size, sizeof(ava_msgs__msg__Velocity));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ava_msgs__msg__Velocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ava_msgs__msg__Velocity__fini(&data[i - 1]);
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
ava_msgs__msg__Velocity__Sequence__fini(ava_msgs__msg__Velocity__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ava_msgs__msg__Velocity__fini(&array->data[i]);
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

ava_msgs__msg__Velocity__Sequence *
ava_msgs__msg__Velocity__Sequence__create(size_t size)
{
  ava_msgs__msg__Velocity__Sequence * array = (ava_msgs__msg__Velocity__Sequence *)malloc(sizeof(ava_msgs__msg__Velocity__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ava_msgs__msg__Velocity__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ava_msgs__msg__Velocity__Sequence__destroy(ava_msgs__msg__Velocity__Sequence * array)
{
  if (array) {
    ava_msgs__msg__Velocity__Sequence__fini(array);
  }
  free(array);
}
