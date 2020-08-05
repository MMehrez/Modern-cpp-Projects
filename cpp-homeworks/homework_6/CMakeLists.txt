cmake_minimum_required(VERSION 3.1)
project(homework_6)
set( CMAKE_CXX_STANDARD 17) # Use c++17. 

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #important!
set(CMAKE_CXX_FLAGS "-Wall" ) # pass a falg to the compiler

# tell cmake where to look for *.hpp, *.h files
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/io_tools)

# tell cmake to output binaries here:
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# create library "libio_tools"
add_library(io_tools io_tools/io_tools.cpp)

add_library(image src/image_class.cpp)
target_link_libraries(image io_tools)

add_executable(my_main src/my_main.cpp)
target_link_libraries(my_main io_tools image)

# add subdirectory for another CMakeLists.txt file
 add_subdirectory(tests)