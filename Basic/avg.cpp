#include<iostream>
using namespace std;
int main()
{
    int eng,sci,math;

    cout<<"enter english marks:";
    cin>>eng;
    cout<<"enter math marks:";
    cin>>math;
    cout<<"enter science marks:";
    cin>>sci;
    int Avg = (eng+math+sci)/3;
    cout<<"Avrage marks is : "<<Avg<<endl;
    return 0;

}