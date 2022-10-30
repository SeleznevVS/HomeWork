#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    float y;
    float x;
    double const NUM_OF_EIL = 2.718281828 ;
    double const PI = 3.141592;


    cout<<"Enter x and y:";
    cin>>x>>y;
    int sqrt = tan(x)*tan(x); //tg^2(x)
    int s = sin(y) * sin(y); //sin^2(y)

    float b =(2*cos(x-PI/6))/((1/x)+s);
    float a=pow(NUM_OF_EIL,b-1) + sqrt * x;
    cout<<"b = "<<b<<endl;
    cout<<"a = "<<a<<endl;


    return 0;
}
