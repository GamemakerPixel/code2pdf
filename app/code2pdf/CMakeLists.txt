include(FetchContent)
FetchContent_Declare(
	Lyra
	GIT_REPOSITORY https://github.com/bfgroup/Lyra.git
	GIT_TAG 1.7.0
)
FetchContent_MakeAvailable(Lyra)

add_executable(${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}_core)
target_link_libraries(${PROJECT_NAME} PRIVATE bfg::lyra)
target_sources(${PROJECT_NAME} PRIVATE
	main.cpp
	cli.cpp
)
	
