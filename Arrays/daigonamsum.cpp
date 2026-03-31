#include<iostream>
using namespace std;

int daigonal(int arry[][4], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum += arry[i][j]; 
            }else if (j==n-i-1)
            {
                sum += arry[i][j]; 
            }
            
        }
    }
    cout<<"Sum = "<<sum;
    return sum;
}


int daigonal2(int arr[][4], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i][i];
        if(i != n-i-1){
            sum += arr[i][n-i-1];
        }
    }
    cout<<"Sum = "<<sum;
    return sum;
}



int main(){
    int arr[4][4] = { {1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16} };
daigonal2(arr, 4);
                     return 0;
}