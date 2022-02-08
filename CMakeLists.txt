cmake_minimum_required(VERSION 3.2)

project(Trignometry VERSION 1.0.1)

add_subdirectory(Trig_funcs)
add_subdirectory(timer)

add_executable(output main.cpp)

target_link_libraries(output PRIVATE trig)
target_link_libraries(output PRIVATE timer)