
    // setup the class with accuracy parameters ie = 10 meaning 10 iterations
    // then supply whether the value gonna be degrees or radians
    // if degree pass d else anything will result in radians calculation.

#include "Trignometry_funcs.h"

trignometry::trignometry(int iterations, char choice)
    {
        iter = iterations;
        c = choice;
        s = 0;
        PI = 3.1415926535897932384650288;
        sign = 1.0;
        p=1;
    } 

int trignometry::powerof1(int x)
{
    if ((x & 1) == 1)
        return -1;
    else
        return 1;
}

unsigned long long int trignometry::fact(unsigned int x)
{
    unsigned long long int fact=1;
    if(x==0 || x==1)
        return 1;
    else
    {
        for(unsigned int i=1;i<=x;i++)
        {
            fact = fact * i;
        }
        return fact;
    }
} 

// my power functions cannot handle fractional power exp
double trignometry::mypower(double base, int exp)
{
    if(exp==0)
        return 1;     
    p = mypower(base,exp/2);
    if(exp%2==0)
        return p*p;
    else
        return base*p*p;
}

void trignometry::rad2rad(double *rad)
{
    while(*rad>2*PI)
        *rad = *rad - 2*PI;
}

void trignometry::deg2rad(double *deg)
{
    while(*deg>360)
        *deg = *deg - 360;

    *deg = *deg * PI/180;    
    rad2rad(deg);
}

double trignometry::sin(double x)
{  
   s = 0.0;
    if(x<0)
    {
        sign = -1.0;
        x = x * -1;
    }
        
    if(c=='r')
        rad2rad(&x);
    else if(c=='d')
        deg2rad(&x);
    else
        exit(EXIT_FAILURE);

    
    for(int i=0;i<iter;i++)
        s = s + powerof1(i) * mypower(x, 2 * i + 1) / fact(2 * i + 1); //taylors series

    return s*sign;
    sign = 1.0;
}

double trignometry::cos(double x)
{
    s = 0.0; 
    if(x<0)
        x = x * -1;
    if(c=='r')
        rad2rad(&x);
    else if(c=='d')
        deg2rad(&x);
    else
        exit(EXIT_FAILURE);

    for(int i=0;i<iter;i++)
        s = s + powerof1(i) * mypower(x, 2 * i) / fact(2 * i);

    return s;
}