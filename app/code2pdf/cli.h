#include <string>

struct CliArgs {
	const std::string output_file;

	CliArgs(std::string output_file);
};

CliArgs parse_cli_args(int argc, char* argv[]);
