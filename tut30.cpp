#include<iostream>
using namespace std;

int sum(int a,int b,int c)
{
    cout<<"Using Function with 3 argument "<<endl;
    return a+b+c;
}
int sum(int a,int b)
{
    cout<<"Using Function with 2 argument "<<endl;
    return a+b;
}
int main()
{
    cout<<"The sum of 2 & 8 is "<<sum(2,8)<<endl;
    cout<<"The sum of 2,15 & 8 is "<<sum(2,8,15);
  return 0;
}