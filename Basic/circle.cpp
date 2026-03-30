/* Question 4 : Write a program to calculate the area of a circle.
Input : r (radius)
Output : PI*r*r (area*/
#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "Enter radius: "<<endl;
    cin>>r;
    cout <<"Area of circle is :"<<(3.14*r*r);
    return 0;
}