#include<iostream>
using namespace std;

void reverceword(char word[], int n){
    int st = 0;
    int end = n;
    while(st<end){
        swap(word[st], word[end]);
        st++;
        end--;
    }
}
int main(){
    char arr[] = "CODE";
    reverceword(arr, strlen(arr));
    cout<<arr;

    return 0;
}