#include<iostream>
using namespace std;

void print(int arr[][3], int m, int n, int key)
{
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == key)
            {
                cout<<"key is ("<<i<<","<<j<<")";
            }
        }
    }

}

void sum(int arr[][3], int m, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[1][i];
    }
    cout<<sum;
}

int main()
{

    int nums[][3] = { {1,4,9}, {11,4,3}, {2,2,3} }; 
    sum(nums, 2, 3); 


}