#include<iostream>
using namespace std;

void printarr(int *arr, int n){
    int maxsum=INT8_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int sumarr=0;
            for(int i=start; i<=end; i++){
              sumarr += arr[i];
            }
            cout<<sumarr<<", ";
            maxsum=max(maxsum, sumarr);
        }
        cout<<endl;
    }
    cout<<"Maximum sum is "<<maxsum;
}

void printarr2(int *arr, int n){
    int maxsum=INT8_MIN;
    for(int start=0; start<n; start++){
        int sumarr=0;
        for(int end=start; end<n; end++){
             sumarr+=arr[end];
            maxsum=max(maxsum, sumarr);
        }
        //cout<<endl;
    }
    cout<<"Maximum sum is "<<maxsum;
}

void kadan(int *arr, int n){
    int maxsum=INT8_MIN;
    int cursum=0;
    for(int i=0; i<n; i++){
        cursum+=arr[i];
        //maxsum =+ cursum;
        maxsum=max(maxsum, cursum);
        if(cursum<0){
            cursum=0;
        }
    }
    cout<<"Maximum sum is "<<maxsum;
}



int main(){
    
    int arr[]={-2, 3, -6, 5, 4, -1};
    int n = sizeof(arr)/sizeof(int);
    kadan(arr, n);
    
}
