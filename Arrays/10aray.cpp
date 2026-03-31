#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 4, 3, 9, 12};
    int max = 0;
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}