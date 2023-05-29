#include<iostream>
using namespace std;
int main(){

    int n = 5;
    
    int arr[n] = {1,-6,1,4,5};

    int newArray[n];

    int j = 0;

    for(int i = 0; i<n ;i++){
        int square =  arr[i]*arr[i];
        newArray[j++] = square;
    }

    for(int i = 0; i<n ; i++){
        for(int j = i+1; j<n ; j++){
            if(arr[i]<arr[j]){
                arr[i];
            }else{
                int temp ;
                temp = i;
                i = j;
                j = temp;
            }
        }
    }

    for(int i = 0; i<n ;i++){
        cout<<newArray[i]<<endl;
    }
}