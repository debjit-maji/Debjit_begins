#include<iostream>
using namespace std;
int  main()
{
 //if-else statement
    float weight_in_kg, height_in_m;
    double BMI;

    cout<<"Enter your weight in kg : ";
    cin>>weight_in_kg;
    cout<<"Enter your height in m : ";
    cin>>height_in_m;
    BMI = weight_in_kg/(height_in_m*height_in_m);
    cout<<"Your BMI is: "<<BMI<<endl;

    if(BMI<15)
    {
        cout<<"You are under weight.";
    }
    else if(BMI>15 && BMI<25)
    {
        cout<<"You are normal.";
    }
    else
    {
        cout<<"You are over weight.";
    }
 return 0;
}