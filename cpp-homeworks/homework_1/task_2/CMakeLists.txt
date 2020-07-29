cmake_minimum_required(VERSION 3.10) # Mandatory.
project(homework_1) # Mandatory.
set( CMAKE_CXX_STANDARD 17) # Use c++17. 

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #important!


#set(CMAKE_CXX_FLAGS "-Wall") # pass a falg to the compiler

# tell cmake where to look for *.hpp, *.h files
include_directories(${PROJECT_SOURCE_DIR}/include)

# tell cmake to output binaries here:
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/bin)

# create library "libipb_arithmetic"
add_library(ipb_arithmetic src/subtract.cpp src/sum.cpp) # creates libipb_arithmetic.a

# add executable main = test_ipb_arithmetic
add_executable(test_ipb_arithmetic src/main.cpp) # main.o

# tell the linker to bind these objects together
target_link_libraries(test_ipb_arithmetic ipb_arithmetic) # ./main
