add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_core)

target_compile_options(${PROJECT_NAME} PRIVATE
	-O1
#	-fsanitize=address,undefined
#	-fno-omit-frame-pointer
)

#target_link_options(${PROJECT_NAME} PRIVATE
#	-fsanitize=address,undefined
#)

