#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float b;
    float a;
    double const NUM_OF_EIL = 2.718281828 ;
    double const PI = 3.141592;


    cout<<"Enter b and a:";
    cin>>b>>a;


    float z = abs(b-15.1);
    float y=(pow(NUM_OF_EIL,-a)+((z+1000)/sin(z)))/((cos(PI*z))+log(b));
    cout<<"z = "<<z<<endl;
    cout<<"y = "<<y<<endl;


    return 0;
}
