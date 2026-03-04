add_library(${PROJECT_NAME}Core STATIC)
target_include_directories(${PROJECT_NAME}Core INTERFACE include)
target_include_directories(${PROJECT_NAME}Core PRIVATE src)
add_subdirectory(src)
