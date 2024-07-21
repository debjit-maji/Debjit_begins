#include<iostream>
using namespace std;
int main()
{
 // Pointers in C++ means a data type which holds other data types.
    int a=134;
    int* b = &a;

 // (Address of) operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
 // (Value at) Deference opertor
    cout<<"The value of a is "<<*b<<endl;
 // Pointers to pointers.
    int** c = &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address of address of c is "<<**c<<endl;
  return 0;
}