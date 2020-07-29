cmake_minimum_required(VERSION 3.10) # Mandatory.
project( first_project ) # Mandatory.
set( CMAKE_CXX_STANDARD 17) # Use c++17. 

set(CMAKE_CXX_FLAGS "-Wall") # pass a falg to the compiler

# tell cmake where to look for *.hpp, *.h files
# include_directories(include /)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #important!

# create library "libtools"
add_library(tools tools.cpp) # creates libtools.a

# add executable main
add_executable(main main.cpp) # main.o

# tell the linker to bind these objects together
target_link_libraries(main tools) # ./main