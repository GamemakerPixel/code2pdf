#pragma once

#include <string>
#include <vector>

/// @brief The code2pdf core library.
namespace core {

// code_file.h

/// @brief Represents a single code file and related metadata.
///
/// Loads and stores the contents of a file, including the filename, and, in the
/// future, the language.
class CodePage {
public:
	/// @brief Creates a CodePage, parsing the text of the file into a vector of lines.
	///
	/// @param content The content of the file.
	///
	/// Example usage:
	/// @code
	///
	/// std::ifstream file("code.cpp");
	/// std::ostringstream file_stream;
	///
	/// file_stream << file.rdbuf();
	///
	///	CodePage page(file_stream.str());
	///
	/// @endcode
	CodePage(const std::string& content);

	/// @brief Returns an iterator for the first line in the code.
	///
	/// @returns A constant iterator pointing to the first line.
	std::vector<std::string>::const_iterator begin() const;
	
	/// @brief Returns an iterator marking the end of the lines of code.
	///
	/// @returns A constant iterator marking the end of the lines of code.
	std::vector<std::string>::const_iterator end() const;
};

}  // namespace core
