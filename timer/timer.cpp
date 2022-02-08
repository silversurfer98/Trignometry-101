#include"timer.h"

timer::timer()
{
    start_time_point = std::chrono::high_resolution_clock::now();
}

void timer::stop()
{
    end_time_point = std::chrono::high_resolution_clock::now();

    auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_time_point).time_since_epoch().count();
    auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_time_point).time_since_epoch().count();

    auto duration = end - start;
    double ms = duration * 0.001;
    std::cout<<"\n the timing of the code is "<<duration<<" micro seconds or "<<ms<<" millisecons";
    //std::cout<<" the timing of the code is "<<end-start<<" micro seconds or "<<(end-start)*0.001;
}

// auto timer::stop()
// {
//     end_time_point = std::chrono::high_resolution_clock::now();

//     auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_time_point).time_since_epoch().count();
//     auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_time_point).time_since_epoch().count();

//     return end - start;

// }

timer::~timer()
{
    stop();
}