// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
#define MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_

#include "more_interfaces/msg/detail/address_book__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const more_interfaces::msg::AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    value_to_yaml(msg.first_name, out);
    out << "\n";
  }

  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: gender
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gender: ";
    value_to_yaml(msg.gender, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "address: ";
    value_to_yaml(msg.address, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const more_interfaces::msg::AddressBook & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<more_interfaces::msg::AddressBook>()
{
  return "more_interfaces::msg::AddressBook";
}

template<>
inline const char * name<more_interfaces::msg::AddressBook>()
{
  return "more_interfaces/msg/AddressBook";
}

template<>
struct has_fixed_size<more_interfaces::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<more_interfaces::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<more_interfaces::msg::AddressBook>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
