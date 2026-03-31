#include<iostream>
using namespace std;  

void search(int arr[][4], int n, int m, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==key){
                cout<<"ans is ("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}

bool shorted(int arr[][4], int n, int m, int key){
    int i=n-1;
    int j=0;
    while(i >= 0  &&  j < n){
        if(arr[i][j] == key){
            cout <<"The address is: ("<<i<<","<<j<<")";
            return true;
            //cout <<"The address is: ("<<i<<","<<j<<")";
        }
        else if(arr[i][j] > key){
            i--;
        }
        else{
            j++;
        }
    }
   
    cout<<"enter a valid number:)";
    return false;
}

int main(){
    int arr[4][4] = { {1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16} };
shorted(arr, 4, 4, 11);

                     return 0;
}