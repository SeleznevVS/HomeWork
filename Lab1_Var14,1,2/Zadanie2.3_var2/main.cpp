#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    float x;
    float y;
    double const NUM_OF_EIL = 2.718281828 ;
    double const PI = 3.141592;


    cout<<"Enter x and y:";
    cin>>x>>y;


    float k =(y+11)/2 ;
    float a =((pow(NUM_OF_EIL,-tan(PI*k)))-log(abs(x)))/(k*x+100000);
    cout<<"k = "<<k<<endl;
    cout<<"a = "<<a<<endl;


    return 0;
}
