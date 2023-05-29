#include<iostream>
using namespace std;
int main(){

    //Q2 Sort an array where even integer come  first and then oddd integers ?

    int n = 5;
    int arr[n]  = {1,2,6,5,2};

    int evenCount = 0;

    for(int i = 0; i<n ; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
    }

    int newArray[evenCount];

    int j = 0;
    for(int i = 0; i<n ; i++){
        if(arr[i] % 2 == 0){
            newArray[j++]  = arr[i];
        }
    }

    for(int i = 0; i<n ; i++){
        if(arr[i] % 2 != 0){
            newArray[j++]  = arr[i];
        }
    }    

    for(int i= 0 ;i<n; i++){
        cout<<newArray[i];
    }

}