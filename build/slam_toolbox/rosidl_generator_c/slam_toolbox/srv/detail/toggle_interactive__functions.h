// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from slam_toolbox:srv\ToggleInteractive.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__FUNCTIONS_H_
#define SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "slam_toolbox/msg/rosidl_generator_c__visibility_control.h"

#include "slam_toolbox/srv/detail/toggle_interactive__struct.h"

/// Initialize srv/ToggleInteractive message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * slam_toolbox__srv__ToggleInteractive_Request
 * )) before or use
 * slam_toolbox__srv__ToggleInteractive_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
bool
slam_toolbox__srv__ToggleInteractive_Request__init(slam_toolbox__srv__ToggleInteractive_Request * msg);

/// Finalize srv/ToggleInteractive message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void
slam_toolbox__srv__ToggleInteractive_Request__fini(slam_toolbox__srv__ToggleInteractive_Request * msg);

/// Create srv/ToggleInteractive message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * slam_toolbox__srv__ToggleInteractive_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
slam_toolbox__srv__ToggleInteractive_Request *
slam_toolbox__srv__ToggleInteractive_Request__create();

/// Destroy srv/ToggleInteractive message.
/**
 * It calls
 * slam_toolbox__srv__ToggleInteractive_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void
slam_toolbox__srv__ToggleInteractive_Request__destroy(slam_toolbox__srv__ToggleInteractive_Request * msg);


/// Initialize array of srv/ToggleInteractive messages.
/**
 * It allocates the memory for the number of elements and calls
 * slam_toolbox__srv__ToggleInteractive_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
bool
slam_toolbox__srv__ToggleInteractive_Request__Sequence__init(slam_toolbox__srv__ToggleInteractive_Request__Sequence * array, size_t size);

/// Finalize array of srv/ToggleInteractive messages.
/**
 * It calls
 * slam_toolbox__srv__ToggleInteractive_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void
slam_toolbox__srv__ToggleInteractive_Request__Sequence__fini(slam_toolbox__srv__ToggleInteractive_Request__Sequence * array);

/// Create array of srv/ToggleInteractive messages.
/**
 * It allocates the memory for the array and calls
 * slam_toolbox__srv__ToggleInteractive_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
slam_toolbox__srv__ToggleInteractive_Request__Sequence *
slam_toolbox__srv__ToggleInteractive_Request__Sequence__create(size_t size);

/// Destroy array of srv/ToggleInteractive messages.
/**
 * It calls
 * slam_toolbox__srv__ToggleInteractive_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void
slam_toolbox__srv__ToggleInteractive_Request__Sequence__destroy(slam_toolbox__srv__ToggleInteractive_Request__Sequence * array);

/// Initialize srv/ToggleInteractive message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * slam_toolbox__srv__ToggleInteractive_Response
 * )) before or use
 * slam_toolbox__srv__ToggleInteractive_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
bool
slam_toolbox__srv__ToggleInteractive_Response__init(slam_toolbox__srv__ToggleInteractive_Response * msg);

/// Finalize srv/ToggleInteractive message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void
slam_toolbox__srv__ToggleInteractive_Response__fini(slam_toolbox__srv__ToggleInteractive_Response * msg);

/// Create srv/ToggleInteractive message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * slam_toolbox__srv__ToggleInteractive_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
slam_toolbox__srv__ToggleInteractive_Response *
slam_toolbox__srv__ToggleInteractive_Response__create();

/// Destroy srv/ToggleInteractive message.
/**
 * It calls
 * slam_toolbox__srv__ToggleInteractive_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void
slam_toolbox__srv__ToggleInteractive_Response__destroy(slam_toolbox__srv__ToggleInteractive_Response * msg);


/// Initialize array of srv/ToggleInteractive messages.
/**
 * It allocates the memory for the number of elements and calls
 * slam_toolbox__srv__ToggleInteractive_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
bool
slam_toolbox__srv__ToggleInteractive_Response__Sequence__init(slam_toolbox__srv__ToggleInteractive_Response__Sequence * array, size_t size);

/// Finalize array of srv/ToggleInteractive messages.
/**
 * It calls
 * slam_toolbox__srv__ToggleInteractive_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void
slam_toolbox__srv__ToggleInteractive_Response__Sequence__fini(slam_toolbox__srv__ToggleInteractive_Response__Sequence * array);

/// Create array of srv/ToggleInteractive messages.
/**
 * It allocates the memory for the array and calls
 * slam_toolbox__srv__ToggleInteractive_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
slam_toolbox__srv__ToggleInteractive_Response__Sequence *
slam_toolbox__srv__ToggleInteractive_Response__Sequence__create(size_t size);

/// Destroy array of srv/ToggleInteractive messages.
/**
 * It calls
 * slam_toolbox__srv__ToggleInteractive_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
void
slam_toolbox__srv__ToggleInteractive_Response__Sequence__destroy(slam_toolbox__srv__ToggleInteractive_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__SRV__DETAIL__TOGGLE_INTERACTIVE__FUNCTIONS_H_
