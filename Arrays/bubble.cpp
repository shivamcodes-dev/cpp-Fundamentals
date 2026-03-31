#include<iostream>
using namespace std;
void bubble(int arr[], int n){

    for (int i=0; i<n-1; i++){ // 5-1-1,3 
        for(int j=0; j<n-i-1; j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}
void print(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}




int main(){
    int arr[] = {5, 4, 3, 9, 1};
    int n=5;
    bubble(arr, n);
    print(arr, n);

}