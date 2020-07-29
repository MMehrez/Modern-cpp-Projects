cmake_minimum_required(VERSION 3.10)
project(std_algorithms)

# Set build type
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set aditional flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-g0 -O3")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/)

file(GLOB files "*.cpp")
foreach(file ${files})
  get_filename_component(TARGET_NAME ${file} NAME_WE)
  add_executable(${TARGET_NAME} ${file})
endforeach()
