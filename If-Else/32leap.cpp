/*Question 2 : Write a C++ program that takes a year from the user and print whether 
that year is a leap year or not.*/
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year : ";
    cin>>year;
    if(year%4==0){
        cout<<"This is a leap year";
    }
        else{
            cout<<"this is a not leap year";
        } 
        return 0;
    }