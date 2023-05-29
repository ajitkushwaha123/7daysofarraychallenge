#include<iostream>
using namespace std;
int main(){

    //Q1 Sort an array with only 0s and 1s ?
    int n=6;
    int arr[n] = {1,1,0,0,1,0};

    int countZero = 0;

    for(int i = 0; i<n ; i++){
        if(arr[i] == 0){
            countZero++;
        }
    }

    cout<<countZero;
    
     int newArray[n];

     int j = 0;;
     for(int i = 0; i<countZero ; i++){
        int zeroes = 0; 
        newArray[j++] = zeroes;
     }

     for(int i = countZero ; i<n ; i++ ){
        int ones = 1;
        newArray[j++]  = ones;
    }

    for(int i = 0; i<n ; i++){
        cout<<newArray[i];
    }
}