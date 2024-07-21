#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  //Operator Presidence......SEE from en.cppreference.com
    int a=6, b=6, c=4, d;
    d = a+b*c-a+c*2;
    cout<<d;
  return 0;  
}