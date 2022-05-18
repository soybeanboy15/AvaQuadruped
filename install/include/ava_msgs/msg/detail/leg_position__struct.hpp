// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ava_msgs:msg\LegPosition.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_HPP_
#define AVA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ava_msgs__msg__LegPosition __attribute__((deprecated))
#else
# define DEPRECATED__ava_msgs__msg__LegPosition __declspec(deprecated)
#endif

namespace ava_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LegPosition_
{
  using Type = LegPosition_<ContainerAllocator>;

  explicit LegPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LegPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _fl_leg_pos_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _fl_leg_pos_type fl_leg_pos;
  using _fr_leg_pos_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _fr_leg_pos_type fr_leg_pos;
  using _br_leg_pos_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _br_leg_pos_type br_leg_pos;
  using _bl_leg_pos_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _bl_leg_pos_type bl_leg_pos;

  // setters for named parameter idiom
  Type & set__fl_leg_pos(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->fl_leg_pos = _arg;
    return *this;
  }
  Type & set__fr_leg_pos(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->fr_leg_pos = _arg;
    return *this;
  }
  Type & set__br_leg_pos(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->br_leg_pos = _arg;
    return *this;
  }
  Type & set__bl_leg_pos(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->bl_leg_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ava_msgs::msg::LegPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ava_msgs::msg::LegPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ava_msgs::msg::LegPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ava_msgs::msg::LegPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ava_msgs::msg::LegPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ava_msgs::msg::LegPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ava_msgs::msg::LegPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ava_msgs::msg::LegPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ava_msgs::msg::LegPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ava_msgs::msg::LegPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ava_msgs__msg__LegPosition
    std::shared_ptr<ava_msgs::msg::LegPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ava_msgs__msg__LegPosition
    std::shared_ptr<ava_msgs::msg::LegPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LegPosition_ & other) const
  {
    if (this->fl_leg_pos != other.fl_leg_pos) {
      return false;
    }
    if (this->fr_leg_pos != other.fr_leg_pos) {
      return false;
    }
    if (this->br_leg_pos != other.br_leg_pos) {
      return false;
    }
    if (this->bl_leg_pos != other.bl_leg_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const LegPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LegPosition_

// alias to use template instance with default allocator
using LegPosition =
  ava_msgs::msg::LegPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__LEG_POSITION__STRUCT_HPP_
