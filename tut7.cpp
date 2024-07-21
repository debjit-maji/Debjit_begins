#include<iostream>
using namespace std;
int main()
{
// Float ,Double and long double literals.
    float d= 34.4f;
    long double e=34.4l;
    cout<<"The value of float is "<<d<<endl;
    cout<<"The value of double is "<<e;
    cout<<"The size of 34.4f is "<<sizeof(34.f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
// Reference Variable
    int a=6;
    int &b=a; 
    cout<<a<<endl<<b;
// Typecasting
    float x=45.6789;
    int y=45;
    cout<<"The value of x is "<<int(x)<<endl;
    cout<<"The value of x is "<<(int)x<<endl;
    cout<<"The value of y is "<<float(y)<<endl;
    cout<<"The value of y is "<<(float)y<<endl;
    return 0;
}