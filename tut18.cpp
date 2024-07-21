#include<iostream>
using namespace std;
typedef struct employee
{
    int E_ID;
    float Salary;
    char Catagory;
} ep;
int main()
{
    ep harry;
    ep debjit;
    ep kalia;
    ep anurag;

    harry.E_ID=243;
    debjit.E_ID=29; 
    kalia.E_ID=561;
    anurag.E_ID=18;

    harry.Salary=940000;
    debjit.Salary=1960000;
    anurag.Salary=3450000;
    kalia.Salary=380000;
    
    kalia.Catagory='d';
    debjit.Catagory='a';
    anurag.Catagory='a';
    harry.Catagory='b';

    cout<<"The Employer ID of harry is "<<harry.E_ID<<endl;
    cout<<"The Employer ID of debjit is "<<debjit.E_ID<<endl;
    cout<<"The Employer ID of kalia is "<<kalia.E_ID<<endl;
    cout<<"The Employer ID of anurag is "<<anurag.E_ID<<endl<<endl;

    cout<<"The Salary of harry is "<<harry.Salary<<endl;
    cout<<"The Salary of debjit is "<<debjit.Salary<<endl;
    cout<<"The Salary of kalia is "<<kalia.Salary<<endl;
    cout<<"The Salary of anurag is "<<anurag.Salary<<endl<<endl;

    cout<<"The Catagory of harry is "<<harry.Catagory<<endl;
    cout<<"The Catagory of debjit is "<<debjit.Catagory<<endl;
    cout<<"The Catagory of kalia is "<<kalia.Catagory<<endl;
    cout<<"The Catagory of anurag is "<<anurag.Catagory<<endl;
  return 0;
}