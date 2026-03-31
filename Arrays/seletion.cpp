#include<iostream>
using namespace std;
void seletion(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int minidx=i;
        for(int j=i+1; j<n-1; j++){ 
                if(arr[i]<arr[minidx]){
                  minidx = j;
                }
        }
    }
}

int main(){
    arr[]={5, 4, 1, 3, 2};
    seletion(arr, 5);
}