#include<iostream>
using namespace std;

int fib(int a)
{
    if(a<2)
    {
        return 1;
    }
    return fib(a-2) + fib(a-1);
}
int main()
{
    int n;
    cout<<"Enter a number:- "<<endl;
    cin>>n;
    cout<<"The fibonacchi of "<<n<<" is:- "<<fib(n)<<endl;
  return 0;     
}
