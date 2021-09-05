#pragma once
#include<iostream>

class trignometry
{
public:
    int iter;
    char c;
    double p, s, PI, sign;
    trignometry(int iterations, char choice);
    int powerof1(int x);
    unsigned long long int fact(unsigned int x);
    double mypower(double base, int exp);
    void rad2rad(double* rad);
    void deg2rad(double* deg);
    double sin(double x);
    double cos(double x);
};