#include<iostream>
using namespace std;
int c=24;
int main()
{
    int a, b, c;
    cout<<"Enter the value of a :- ";
    cin>>a;

    cout<<"Enter the value of b :- ";
    cin>>b;
    
    c=a+b;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The global c is "<<::c;
 return 0;
} 