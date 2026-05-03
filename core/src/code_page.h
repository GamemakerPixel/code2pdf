#pragma once

#include <string>
#include <vector>

namespace core {

class CodePage {
	const std::vector<std::string> lines;

public:
	CodePage(const std::string& content);

	std::vector<std::string>::const_iterator begin() const;
	std::vector<std::string>::const_iterator end() const;

private:
	static std::vector<std::string> split_into_lines(const std::string& content);
};

}
