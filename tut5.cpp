#include<iostream>
using namespace std;
int main()
{
    float a=41.023 , b=5.32301;
    //These are arithmetic operator.
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<"The value of b++ is "<<b++<<endl;
    cout<<"The value of b-- is "<<b--<<endl;
    cout<<"The value of ++b is "<<++b<<endl;
    cout<<"The value of --b is "<<--b<<endl;
    cout<<endl;

    //These are Comparision operator.
    cout<<"The value of a != b is "<<(a!=b)<<endl; // != is not equal to.
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<endl;

    // These are logical operator. 
    // && is logical and operator.
    // || is logical or operator.
    cout<<"The value of a != b && a < b is "<<(a!=b && a<b)<<endl;
    cout<<"The value of a == b && a > b is "<<(a==b && a>b)<<endl;
    cout<<"The value of a != b || a < b is "<<(a!=b || a<b)<<endl;
    cout<<"The value of a == b || a > b is "<<(a==b || a>b)<<endl;
    cout<<"The value of !(a == b) is "<<!(a==b)<<endl; //logical not operator
    cout<<endl;
 return 0;

}