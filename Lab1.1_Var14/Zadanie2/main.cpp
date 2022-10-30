#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    const double PI = 3.141592653589793;
    cout <<"Ellipse parametr"<<endl;
    cout << "Include a: ";
    cin >> a;
    cout << "Include b: ";
    cin >> b;

    c = 2*PI*sqrt((pow(a,2)+pow(b,2))/2);
    cout << "P=" << c << endl;

    c = a*b*PI;
    cout << "S=" << c << endl;
    return 0;
}
