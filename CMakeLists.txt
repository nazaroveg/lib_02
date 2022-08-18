
cmake_minimum_required (VERSION 3.22.0)

project (lib_02)

add_library(lib_dll SHARED Leaver.h Leaver.cpp)
add_executable(lib_02EXE con_lib_02.cpp)

target_link_libraries(lib_02EXE lib_dll)




