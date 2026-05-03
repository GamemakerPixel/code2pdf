#include <sstream>
#include <string>
#include <vector>

#include "code_page.h"

namespace core {

CodePage::CodePage(const std::string& content):
	lines(CodePage::split_into_lines(content)) {}

std::vector<std::string> CodePage::split_into_lines(
	const std::string& content
) {
	std::vector<std::string> result;

	std::istringstream content_stream(content);
	std::string line;
	while (std::getline(content_stream, line)) {
		result.push_back(line);
	}

	return result;
}

std::vector<std::string>::const_iterator CodePage::begin() const {
	return lines.begin();
}

std::vector<std::string>::const_iterator CodePage::end() const {
	return lines.end();
}

} // namespace core
