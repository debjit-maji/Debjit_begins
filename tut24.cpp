#include<iostream>
using namespace std;

int product(int a, int b)
{     // dont use inline with static
    static int c=0; //static variavle whivh executes only once
    c=c+1;
    return a*b+c;
}
int main()
{
    int a, b;
    cout<<"Enter the value of a & b"<<endl;
    cin>>a>>b;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
    cout<<"The product is "<<product(a,b)<<endl;
  return 0;
}