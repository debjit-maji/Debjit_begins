#include<iostream>
using namespace std;
int  main()
{
    int age;
    cout<<"Enter your age: ";
    cin>> age;
    if (age<=125)
    {
     switch(age)
     {
        case 10:
        cout<<"Congratulations for a Decade!"<<endl;
        break;

        case 15:
        cout<<"Congratulations for a Pearl jubliee!"<<endl;
        break;

        case 25:
        cout<<"Congratulations for a Silver jubliee!"<<endl;
        break;

        case 50:
        cout<<"Congratulations for a Golden jubliee!"<<endl;
        break;

        case 75:
        cout<<"Congratulations for a Diamond jubliee!"<<endl;
        break;

        case 100:
        cout<<"Congratulations for a century!"<<endl;
        break;

        case 125:
        cout<<"Congratulations for a Platinum jubliee!"<<endl;
        break;

        default:
        cout<<"No Special case";
     }
    }

    else
     {
      cout<<"Abb toh maar ja bask!"<<endl;
     }
 return 0;
}