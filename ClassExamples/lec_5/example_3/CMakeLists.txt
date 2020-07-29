cmake_minimum_required(VERSION 3.1)
project(opencv_example)

#include OpenCV
find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# add executables
add_executable(write_read_cv_mat write_read_cv_mat.cpp)
target_link_libraries(write_read_cv_mat ${OpenCV_LIBS})