#include<iostream>
using namespace std;

int proud(int a, int b);

int main(){

int r = proud(2,6);
cout<<r;
    return 0;
}
int proud(int a, int b){
    int pro = a*b;
    return pro;
}
