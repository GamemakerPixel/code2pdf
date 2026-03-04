include(FetchContent)
FetchContent_Declare(
	PDFHummus
	GIT_REPOSITORY https://github.com/galkahana/PDF-Writer.git
	GIT_TAG v4.8.1
)
set(PDFHUMMUS_NO_DCT TRUE CACHE BOOL "Exclude JPEG support" FORCE)
set(PDFHUMMUS_NO_TIFF TRUE CACHE BOOL "Exclude TIFF support" FORCE)
set(PDFHUMMUS_NO_PNG TRUE CACHE BOOL "Exclude PNG support" FORCE)
set(PDFHUMMUS_NO_OPENSSL TRUE CACHE BOOL "Exclude encryption support" FORCE)
FetchContent_MakeAvailable(PDFHummus)

add_library(${PROJECT_NAME}_core STATIC)
target_include_directories(${PROJECT_NAME}_core INTERFACE include)
target_include_directories(${PROJECT_NAME}_core PRIVATE src)
target_link_libraries(${PROJECT_NAME}_core PRIVATE PDFHummus::PDFWriter)
add_subdirectory(src)
