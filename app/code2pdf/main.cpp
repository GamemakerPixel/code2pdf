#include <iostream>
#include <string>

#include <core/core.h>
#include <lyra/lyra.hpp>

#include "cli.h"

int main(int argc, const char* argv[]) {
	CliArgs args = parse_cli_args(argc, argv);
  core::create_test_pdf(args.output_file);

  return 0;
}
