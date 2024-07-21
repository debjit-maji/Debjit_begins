#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //Manipulators in C++.
    long long int a=456, b=2, c=123456789;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;

    cout<<"The value of b with setw is "<<setw(10)<<b<<endl;
    cout<<"The value of c with setw is "<<setw(10)<<c<<endl;
    cout<<"The value of a with setw is "<<setw(10)<<a<<endl;

    return 0;
}