#include<iostream>
#include <cstring>
using namespace std;

bool ispalidram(char word[], int n){
    int st = 0, end = n-1;
    while(st<end){
        if(word[st++] != word[end--]){
            cout<<"not a valid palindram";
            return false;
        }
    }
       
            cout<<" valid palindram";
            return true;
     
    
}

int main(){
    char word[] = "apple";
    ispalidram(word, strlen(word));
    

    return 0;
}