#include<iostream>
using namespace std;
int binsearch(int arr[], int n, int key){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else {
            end = mid-1;
         }
    }
    return -1;
}

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr)/sizeof(int);
    cout<<binsearch(arr, n, 9 );
    return 0;
}