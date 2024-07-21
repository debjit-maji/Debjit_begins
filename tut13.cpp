#include<iostream>
using namespace std;
int  main()
{
  int i=1;
    for(i=1; i<=10; i++)
    {
        cout<<i*6<<endl;
    }

    while(i<=10)
    {
        cout<<i*6<<endl;
        i++;
    }

    do
    {
        cout<<i*6<<endl;
        i++;
    } 
    while (i<11);
    
 return 0;
}