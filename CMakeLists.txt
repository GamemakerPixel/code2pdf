cmake_minimum_required(VERSION 4.2)
project(
  Hello
  VERSION 1.0
  LANGUAGES CXX
)
set(PROJECT_VERSION_PRERELEASE "alpha")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

option(BUILD_TESTING "Build the tests" ON)
option(ENABLE_DOCS "Create the documentation generation target" ON)

include(FetchContent)

add_subdirectory(core)
add_subdirectory(app)

if (BUILD_TESTING)
	add_subdirectory(test)
endif()

if (ENABLE_DOCS)
	add_subdirectory(docs)
endif()
