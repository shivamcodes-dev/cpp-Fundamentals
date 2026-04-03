#include<iostream>
using namespace std;
int facto(int a){
    int n=1;
    for(int i=1; i<=a; i++){
         n = n*i;
    }
    cout<<n<<endl;
    return n;
}

int main(){
facto(0);
facto(1);
facto(2);
facto(3);
facto(4);
return 0;
}