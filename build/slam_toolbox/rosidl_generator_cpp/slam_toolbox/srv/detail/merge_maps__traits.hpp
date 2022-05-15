// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_toolbox:srv\MergeMaps.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__MERGE_MAPS__TRAITS_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__MERGE_MAPS__TRAITS_HPP_

#include "slam_toolbox/srv/detail/merge_maps__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_toolbox::srv::MergeMaps_Request>()
{
  return "slam_toolbox::srv::MergeMaps_Request";
}

template<>
inline const char * name<slam_toolbox::srv::MergeMaps_Request>()
{
  return "slam_toolbox/srv/MergeMaps_Request";
}

template<>
struct has_fixed_size<slam_toolbox::srv::MergeMaps_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<slam_toolbox::srv::MergeMaps_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<slam_toolbox::srv::MergeMaps_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_toolbox::srv::MergeMaps_Response>()
{
  return "slam_toolbox::srv::MergeMaps_Response";
}

template<>
inline const char * name<slam_toolbox::srv::MergeMaps_Response>()
{
  return "slam_toolbox/srv/MergeMaps_Response";
}

template<>
struct has_fixed_size<slam_toolbox::srv::MergeMaps_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<slam_toolbox::srv::MergeMaps_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<slam_toolbox::srv::MergeMaps_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_toolbox::srv::MergeMaps>()
{
  return "slam_toolbox::srv::MergeMaps";
}

template<>
inline const char * name<slam_toolbox::srv::MergeMaps>()
{
  return "slam_toolbox/srv/MergeMaps";
}

template<>
struct has_fixed_size<slam_toolbox::srv::MergeMaps>
  : std::integral_constant<
    bool,
    has_fixed_size<slam_toolbox::srv::MergeMaps_Request>::value &&
    has_fixed_size<slam_toolbox::srv::MergeMaps_Response>::value
  >
{
};

template<>
struct has_bounded_size<slam_toolbox::srv::MergeMaps>
  : std::integral_constant<
    bool,
    has_bounded_size<slam_toolbox::srv::MergeMaps_Request>::value &&
    has_bounded_size<slam_toolbox::srv::MergeMaps_Response>::value
  >
{
};

template<>
struct is_service<slam_toolbox::srv::MergeMaps>
  : std::true_type
{
};

template<>
struct is_service_request<slam_toolbox::srv::MergeMaps_Request>
  : std::true_type
{
};

template<>
struct is_service_response<slam_toolbox::srv::MergeMaps_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SLAM_TOOLBOX__SRV__DETAIL__MERGE_MAPS__TRAITS_HPP_
