#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main()
{

    float num1;

    cout<<"Enter your number: ";
    cin>>num1;

    float sqr=num1*num1;
    float cube=pow(num1,3);

    setprecision(6);
    cout<<"Sqr="<<sqr<<endl;

    cout<<"Cube="<<cube;

    return 0;




    return 0;
}
