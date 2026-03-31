#include<iostream>
using namespace std;
int main (){
    int count = 0;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = count;
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = count;
            cout<<arr[i][j];
        }
    }cout<<endl;
}