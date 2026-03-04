#include <gtest/gtest.h>
#include "core/greetings.h"

using namespace core;


TEST(HelloTest, GetHelloReturnsHelloName)
{
	EXPECT_EQ("Hello Name!", core::get_hello("Name"));
}
