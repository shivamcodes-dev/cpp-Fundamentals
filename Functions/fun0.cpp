#include<iostream>
using namespace std;

bool iseven(int n){
    if(n%2==0){
    return true;
    }else{
    return false;
    }
}

// Factorial
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
//prime
bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            return false;
        }
        else {
            return true;
        }
    }

}

int main(){
   cout<< isprime(23); 
    return 0;
}