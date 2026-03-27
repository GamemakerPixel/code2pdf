#include <iostream>
#include <string>

#include <lyra/lyra.hpp>

#include "cli.h"

CliArgs::CliArgs(std::string output_file)
	: output_file(std::move(output_file)) {}

std::expected<CliArgs, ParseFailure> parse_cli_args(int argc, const char* argv[]) {
	bool help = false;
	std::string output_file;

	auto cli = lyra::help(help)
		| lyra::arg(output_file, "output_file")
			("The pdf file to create");

	auto result = cli.parse({argc, argv});
	if (!result) {
		std::cerr << result.message() << std::endl;
		return std::unexpected(ParseFailure::InvalidArguments);
	}

	if (help) {
		std::cout << cli << std::endl;
		return std::unexpected(ParseFailure::RequestedHelp);
	}

	return CliArgs(output_file);
}
