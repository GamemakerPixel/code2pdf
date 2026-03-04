add_library(${PROJECT_NAME}_core STATIC)
target_include_directories(${PROJECT_NAME}_core INTERFACE include)
target_include_directories(${PROJECT_NAME}_core PRIVATE src)
add_subdirectory(src)
