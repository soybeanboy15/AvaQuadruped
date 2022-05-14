// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ava_msgs:msg/AvaPose.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_POSE__TRAITS_HPP_
#define AVA_MSGS__MSG__DETAIL__AVA_POSE__TRAITS_HPP_

#include "ava_msgs/msg/detail/ava_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ava_msgs::msg::AvaPose>()
{
  return "ava_msgs::msg::AvaPose";
}

template<>
inline const char * name<ava_msgs::msg::AvaPose>()
{
  return "ava_msgs/msg/AvaPose";
}

template<>
struct has_fixed_size<ava_msgs::msg::AvaPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ava_msgs::msg::AvaPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ava_msgs::msg::AvaPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AVA_MSGS__MSG__DETAIL__AVA_POSE__TRAITS_HPP_
