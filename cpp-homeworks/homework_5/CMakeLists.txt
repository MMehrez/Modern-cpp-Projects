cmake_minimum_required(VERSION 3.1)
project(opencv_example)
set( CMAKE_CXX_STANDARD 17) # Use c++17. 

#include OpenCV
find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #important!
set(CMAKE_CXX_FLAGS "-Wall") # pass a falg to the compiler

# tell cmake where to look for *.hpp, *.h files
include_directories(${PROJECT_SOURCE_DIR}/include)

# tell cmake to output binaries here:
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# create library "compute_sifts"
add_library(mat_serialization src/sifts_internal.cpp src/serialization.cpp) # creates libcompute_sifts.a

add_library(convert_dataset src/convert_dataset.cpp) # creates libcompute_sifts.a
target_link_libraries(convert_dataset mat_serialization ${OpenCV_LIBS})
# add_library(mat_serialization src/serialization.cpp) # creates libcompute_sifts.a
# target_link_libraries(mat_serialization -lcompute_sifts)

# add executables
add_executable(display_image src/display_image.cpp)
target_link_libraries(display_image ${OpenCV_LIBS})

# add_executable(display_sifts src/display_sifts.cpp)
# target_link_libraries(display_sifts ${OpenCV_LIBS} mat_serialization)

add_executable(my_main src/my_main.cpp)
target_link_libraries(my_main ${OpenCV_LIBS} mat_serialization convert_dataset)

# add subdirectory for another CMakeLists.txt file
# add_subdirectory(tests)