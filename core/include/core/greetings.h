#pragma once

#include <string>

namespace core {

/// Returns a string to greet the user.
///
/// @param name The name of the user
///
/// @return The string used to greet the user
std::string get_hello(const std::string& name);

}  // namespace core
