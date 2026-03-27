#include <core/core.h>
#include <lyra/lyra.hpp>

#include "cli.h"

int main(int argc, const char* argv[]) {
	auto parse_result = parse_cli_args(argc, argv);

	if (!parse_result) {
		switch (parse_result.error()) {
			case ParseFailure::InvalidArguments:
				return 1;
			case ParseFailure::RequestedHelp:
				return 0;
		}
	}

	CliArgs args = *parse_result;

  core::create_test_pdf(args.output_file);

  return 0;
}
