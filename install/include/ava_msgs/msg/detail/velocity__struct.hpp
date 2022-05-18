// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ava_msgs:msg\Velocity.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__VELOCITY__STRUCT_HPP_
#define AVA_MSGS__MSG__DETAIL__VELOCITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ava_msgs__msg__Velocity __attribute__((deprecated))
#else
# define DEPRECATED__ava_msgs__msg__Velocity __declspec(deprecated)
#endif

namespace ava_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Velocity_
{
  using Type = Velocity_<ContainerAllocator>;

  explicit Velocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0;
      this->linear_y = 0.0;
      this->linear_z = 0.0;
      this->angular_x = 0.0;
      this->angular_y = 0.0;
      this->angular_z = 0.0;
    }
  }

  explicit Velocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0;
      this->linear_y = 0.0;
      this->linear_z = 0.0;
      this->angular_x = 0.0;
      this->angular_y = 0.0;
      this->angular_z = 0.0;
    }
  }

  // field types and members
  using _linear_x_type =
    double;
  _linear_x_type linear_x;
  using _linear_y_type =
    double;
  _linear_y_type linear_y;
  using _linear_z_type =
    double;
  _linear_z_type linear_z;
  using _angular_x_type =
    double;
  _angular_x_type angular_x;
  using _angular_y_type =
    double;
  _angular_y_type angular_y;
  using _angular_z_type =
    double;
  _angular_z_type angular_z;

  // setters for named parameter idiom
  Type & set__linear_x(
    const double & _arg)
  {
    this->linear_x = _arg;
    return *this;
  }
  Type & set__linear_y(
    const double & _arg)
  {
    this->linear_y = _arg;
    return *this;
  }
  Type & set__linear_z(
    const double & _arg)
  {
    this->linear_z = _arg;
    return *this;
  }
  Type & set__angular_x(
    const double & _arg)
  {
    this->angular_x = _arg;
    return *this;
  }
  Type & set__angular_y(
    const double & _arg)
  {
    this->angular_y = _arg;
    return *this;
  }
  Type & set__angular_z(
    const double & _arg)
  {
    this->angular_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ava_msgs::msg::Velocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const ava_msgs::msg::Velocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ava_msgs::msg::Velocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ava_msgs::msg::Velocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ava_msgs::msg::Velocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ava_msgs::msg::Velocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ava_msgs::msg::Velocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ava_msgs::msg::Velocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ava_msgs::msg::Velocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ava_msgs::msg::Velocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ava_msgs__msg__Velocity
    std::shared_ptr<ava_msgs::msg::Velocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ava_msgs__msg__Velocity
    std::shared_ptr<ava_msgs::msg::Velocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Velocity_ & other) const
  {
    if (this->linear_x != other.linear_x) {
      return false;
    }
    if (this->linear_y != other.linear_y) {
      return false;
    }
    if (this->linear_z != other.linear_z) {
      return false;
    }
    if (this->angular_x != other.angular_x) {
      return false;
    }
    if (this->angular_y != other.angular_y) {
      return false;
    }
    if (this->angular_z != other.angular_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Velocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Velocity_

// alias to use template instance with default allocator
using Velocity =
  ava_msgs::msg::Velocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__VELOCITY__STRUCT_HPP_
