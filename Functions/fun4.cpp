#include<iostream> 
using namespace std;

int facto(int a){
    for(int i=2; i<a; i++){
        if(a%i==0){
            cout<<"PRIME \n";
            return a;
        } 
    }
    cout<<"NOT";
}

int main(){
facto(12);
facto(13);

return 0;
}