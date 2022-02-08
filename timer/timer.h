#pragma once
#include<iostream>
#include<chrono>
class timer
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time_point;
    std::chrono::time_point<std::chrono::high_resolution_clock> end_time_point;

public:
    timer();
    //auto stop();
    void stop();
    ~timer();
};