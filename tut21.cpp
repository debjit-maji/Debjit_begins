#include<iostream>
using namespace std;

//Function Prototype
//type function-name (arguments);

//int sum (int a, int b); //acceptable
//int sum (int a,b); //not acceptable
int sum (int, int); //acceptable
void g(void);
int main()
{
    int num1 , num2;  // num1 & num2 are actual parameters.
    cout<<"Enter the value of num 1 :-"<<endl;
    cin>>num1;
    cout<<"Enter the value of num 2 :-"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    g();
  return 0;
}
int sum(int a, int b)
{
    int c = a + b; // a & b will be taking values from actual parameters num1 & num2.
    return c;
}
void g()
{
    cout<<endl<<"Hello!"; 
}
