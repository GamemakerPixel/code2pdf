include(CTest)

FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG v1.17.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "")
set(INSTALL_GTEST OFF CACHE BOOL "")

FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME}_tests)
target_link_libraries(${PROJECT_NAME}_tests PRIVATE gtest_main)
target_link_libraries(${PROJECT_NAME}_tests PRIVATE ${PROJECT_NAME}_core)
target_sources(${PROJECT_NAME}_tests PRIVATE
	hello_test.cpp
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_tests)
