#include "hello.h"

#include <string>

namespace core {

std::string get_hello(const std::string& name) { return "Hello " + name + "!"; }

}  // namespace core
