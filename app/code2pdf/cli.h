#include <expected>
#include <string>

struct CliArgs {
	const std::string output_file;

	CliArgs(std::string output_file);
};

enum class ParseFailure {
	RequestedHelp,
	InvalidArguments,
};

std::expected<CliArgs, ParseFailure> parse_cli_args(int argc, const char* argv[]);
