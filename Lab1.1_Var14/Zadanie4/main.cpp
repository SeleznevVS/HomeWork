#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    cout<<"Enter your number: ";
    cin >> x;

    x=abs(x)+pow(x,5);
    cout<<"Result="<<x;
    return 0;
}
