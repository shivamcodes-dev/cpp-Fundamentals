#include<iostream>
using namespace std;

void printhello(){
    cout<<"Hello\n";
}

int sum(int a, int b){
    int sumn = a+b;
     cout<<sumn;
    return sumn;

}

int main(){
    //printhello();
//sum();
sum(7, 8);

    return 0;
}