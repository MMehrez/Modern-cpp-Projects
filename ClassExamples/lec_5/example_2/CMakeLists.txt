cmake_minimum_required(VERSION 3.1)
project(opencv_example)

#include OpenCV
find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# tell cmake where to look for *.hpp, *.h files
include_directories(${PROJECT_SOURCE_DIR}/include)

# tell cmake to output binaries here:
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# create library "compute_sifts"
add_library(compute_sifts src/compute_sifts.cpp) # creates libcompute_sifts.a

# add executables
add_executable(display_image src/display_image.cpp)
target_link_libraries(display_image ${OpenCV_LIBS})

add_executable(display_sifts src/display_sifts.cpp)
target_link_libraries(display_sifts ${OpenCV_LIBS} compute_sifts)

