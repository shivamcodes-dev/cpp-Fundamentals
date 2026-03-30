#include<iostream>
using namespace std;
int main()
{
    float pencil,pen,eraser;

    cout<<"Enter Pen price";
    cin>>pen;

    cout<<"Enter Pencil price";
    cin>>pencil;

    cout<<"Enter Eraser price";
    cin>>eraser;
    cout<<"total Price is "<<pen+pencil+eraser;
    cout<<" GST is : "<<(pen+pencil+eraser)*0.18;
    cout<<" Total price included GST is : "<<(pen+pencil+eraser)+(pen+pencil+eraser)*0.18;
    return 0;
}