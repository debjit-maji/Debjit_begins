#include<iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int c= a+b;
//   return c;
// }

//This won't occur
// void swap(int a, int b)
// {
// int temp= a;
// a = b;
// b = temp;
// }

//This occurs. Call by reference using pointers.
void swapPointer(int* a, int* b)
{                  //temp a b  
  int temp= *a;    // 4   4 9
  *a=*b;           // 4   9 9
  *b=temp;         // 4   9 4
}

//This occurs. Call by reference using C++ reference vzriable.
void swapreferencevar(int &a, int &b)
{                  //temp a b  
  int temp= a;    // 4   4 9
  a=b;           // 4   9 9
  b=temp;         // 4   9 4
}

int main()
{
    int x=4 , y=9;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x,y);
    // swapPointers(&x, &y);
    swapreferencevar(x, y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

  return 0;
}