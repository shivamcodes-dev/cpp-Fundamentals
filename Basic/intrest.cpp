#include<iostream>
using namespace std;
int main()
{
   /* Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T)Output :
(P*R*T) / 100
Question 4 : Write a program to calculate the area of a circle.
Input : r (radius)
Output : PI*r*r (area*/
int P,R,T;

    cout<<" enter principal: "<<endl;
    cin>>P;
    cout<<" enter Rate: "<<endl;
    cin>>R;
    cout<<" enter Time "<<endl;
    cin>>T;
    cout<<"Ans is :"<<((P*R*T)/100) <<endl;
    return 0;
}