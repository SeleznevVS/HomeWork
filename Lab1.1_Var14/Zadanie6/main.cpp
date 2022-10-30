#include <iostream>

using namespace std;

int main()
{
    float num1,num2,num3;
    cout<<"Enter 3 numbers:";
    cin>>num1>>num2>>num3;

    if((num1>num2)&&(num1>num3))
    {
        num1+=5;
        cout<<"Max= "<<num1<<endl;
    }

    if((num2>num1)&&(num2>num3))
    {
        num2+=5;
        cout<<"Max= "<<num2<<endl;
    }
    if((num3>num1)&&(num3>num2))
    {
        num3+=5;
        cout<<"Max= "<<num3<<endl;
    }

    if((num1<num2)&&(num1<num3))
    {
        num1-=3;
        cout<<"Min= "<<num1<<endl;
    }
    if((num2<num1)&&(num2<num3))
    {
        num2-=3;
        cout<<"Min= "<<num2<<endl;
    }
    if((num3<num1)&&(num3<num2))
    {
        num3-=3;
        cout<<"Min= "<<num3<<endl;
    }

    return 0;
}
