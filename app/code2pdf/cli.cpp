#include <string>

#include "cli.h"

CliArgs::CliArgs(std::string output_file)
	: output_file(std::move(output_file)) {}

CliArgs parse_cli_args(int argc, char* argv[]) {
	bool help = false;
	std::string output_file;

	auto cli = lyra::help(help)
		| lyra::arg(output_file, "output_file")
			("The pdf file to create");

	auto result = cli.parse({argc, argv});
	if (!result) {
		std::cerr << result.message() << std::endl;
		return;
	}

	if (help) {
		std::cout << cli << std::endl;
		return;
	}

	return CliArgs(output_file);
}
