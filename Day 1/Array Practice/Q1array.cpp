#include<iostream>
#include<climits>
using namespace std;

int main(){

    // 50 Question on array in 7 Days challenge

    //Q1. Largest Element in Array?

    int maxi = INT_MIN;

    int size ;
    cin>>size ; 
     
    int arr[size];

    for(int i= 0 ; i<size ; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<size ; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    
    cout<<maxi<<endl;
}