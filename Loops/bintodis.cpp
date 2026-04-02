#include <iostream>
using namespace std;

void bintodec(int bin){
int n = bin;
int dec = 0;
int pow = 1;//2^0 2^1  2^2
while(n>0){
   int lastdig = n%10;
   dec += lastdig * pow;
   pow=pow*2;
   n = n/10;
}
cout<<dec<<endl ;
}

int main(){
   bintodec(11);
    return 0;
}