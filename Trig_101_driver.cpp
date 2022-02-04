
#include"Trig_funcs.h"
#include"timer.h"
using namespace std;


int main()
{
    cout<<"\n\n*************** Trignometry 101 ******************************\n\n";

    cout<<" (don't do more than 20 that's toooooo much)\n";
    cout<<" Enter the accuracy for function evaluation : ";
    int acc;
    cin>>acc;
    float x;
    cout<<"\n Enter choice \n 1 --> radians\n 2 --> degrees\n your choice : ";
    int c;
    cin>>c;

    {
    //this brackets are for timer tim to create and delete itself so that we can know time
    timer tim;
        switch(c)
        {
            case (1):
            // the below bracket is important as my trig class globally takes radians or degrees as argument 
            // we need to delete the trig object before we can have a degree object
            // broken by design
            {
                trignometry t(acc,'r');
                cout<<"enter the rads :";
                cin>>x;
                cout<<" sine of "<<x<<" rads is "<<t.sin(x)<<"\n";
                cout<<" cosine of "<<x<<" rads is "<<t.cos(x)<<"\n";
                break;
            }

            case (2):
            {
                trignometry t(acc,'d');
                cout<<"enter the degrees :";
                cin>>x;
                cout<<" sine of "<<x<<" degrees is "<<t.sin(x)<<"\n";
                cout<<" cosine of "<<x<<" degrees is "<<t.cos(x)<<"\n";
                break;
            }
            default:
                cerr<<"\ni dont know what to say\n\n";
                cin.get();
                break;
        }
    }

    cin.get();
    cin.get();
    return 0;
    
}







