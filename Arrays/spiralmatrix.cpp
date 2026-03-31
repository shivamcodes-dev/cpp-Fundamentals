#include<iostream>
using namespace std;


void spairematrix(int arr[][4], int n, int m){
int srow=0; int scol=0;
int lrow=n-1;
int lcol=m-1;
while (srow<=lrow && scol<=lrow)
{


    //top
    for(int i=scol; i<=lcol; i++){
       cout<<arr[srow][i]<<" ";
    }


    //right
    for(int j=srow+1; j<=lrow; j++){
        cout <<arr[j][lcol]<<" ";
    }

    //bottom
    for(int i=lcol-1; i>scol; i--){
        if(srow==lrow){
            break;
        }
        cout <<arr[lrow][i]<<" ";
    }


    //left
    for(int i=lrow; i>=srow+1; i--){
        if(scol==lcol){
            break;
        }
        cout <<arr[i][scol]<<" ";
    }
    srow++;
    scol++;
    lcol--;
    lrow--;

}
}


int main(){
    int arr[4][4] = { {1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16} };
                     spairematrix(arr, 4, 4);

                     return 0;
}