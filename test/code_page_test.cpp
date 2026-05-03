#include <vector>

#include <gtest/gtest.h>

#include "core/core.h"

using namespace core;

TEST(CodePageTest, CodePageEmptyWhenNoLines) {
	CodePage page("");
  EXPECT_EQ(page.begin(), page.end());
}

TEST(CodePageTest, CodePageOneLine) {
	CodePage page("Just one line!");

	std::vector<std::string> expected = {"Just one line!"};
	std::vector<std::string> result(page.begin(), page.end());

	EXPECT_EQ(result, expected);
}

TEST(CodePageTest, CodePageSplitsMultipleLines) {
	CodePage page("One\nTwo\nThree");

	std::vector<std::string> expected = {"One", "Two", "Three"};
	std::vector<std::string> result(page.begin(), page.end());

	EXPECT_EQ(result, expected);
}
