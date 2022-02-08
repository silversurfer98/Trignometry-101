add_library(
    timer
    timer.h
    timer.cpp
)

target_include_directories(timer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/")