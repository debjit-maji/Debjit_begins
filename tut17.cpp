#include<iostream>
using namespace std;
int main()
{
    int marks[]={23,65,555,56};
    int* p= marks;

    cout<<*(p++)<<endl;
    cout<<*(p--)<<endl;
    cout<<*(--p)<<endl;
    cout<<*(++p)<<endl;

    cout<<"The marks of *p is "<<*p<<endl;
    cout<<"The marks of *p+1 is "<<*(p+1)<<endl;
    cout<<"The marks of *p+2 is "<<*(p+2)<<endl;
    cout<<"The marks of *p+3 is "<<*(p+3)<<endl;

  return 0;
}