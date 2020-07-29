cmake_minimum_required(VERSION 3.10) # Mandatory.
project(homework_4) # Mandatory.
set( CMAKE_CXX_STANDARD 17) # Use c++17. 

#set(CMAKE_CXX_FLAGS "-Wall") # pass a falg to the compiler

# tell cmake where to look for *.hpp, *.h files
include_directories(${PROJECT_SOURCE_DIR}/include)

# tell cmake to output binaries here:
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# create library "html_writer"
# add_library(html_writer src/html_writer_functions.cpp) # creates libhtml_writer.a

# create library "image_browser"
# add_library(image_browser src/image_browser_functions.cpp) # creates libhtml_writer.a

# add executable main = test_ipb_arithmetic
add_executable(main src/main.cpp) # main.o

# tell the linker to bind these objects together
# target_link_libraries(create_image_browser html_writer image_browser) # ./main
# add_subdirectory(tests)

