#include<iostream>
using namespace std;
int main(){
    int price[3];
    cout<<"enter first price : ";
    cin>>price[0];
    
    cout<<"enter second price : ";
    cin>>price[1];

    cout<<"enter second price : ";
    cin>>price[2];
     int total = (price[0]+price[1]+price[2]);

     cout<<total+(total*0.18);


    // cout<<"enter first price : ";
    // cin>>(*price+2);
    // cout<<"(*price+1)+(*price+1)+(*price+1)";
    return 0;

}