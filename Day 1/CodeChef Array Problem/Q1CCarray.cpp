#include<iostream>
using namespace std;

int main(){

    //Q1. CodeChef probem 1 on array ?


    int n =4;
    int arr[n];
    
    int count = 0;

    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    
    for(int i= 0 ; i<n ; i++){
        if(arr[i]>=10){
            count++;
            
        }
    }
    
    cout<<count;
}