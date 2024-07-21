#include<iostream>
using namespace std;
union money
  {
    int rice;
    char alphabet;
    float pound;
  };
int main()
{
  union money m1;
  m1.rice= 66;
  m1.pound= 44;
  cout<<"The money is "<<m1.rice;
  return 0;
}