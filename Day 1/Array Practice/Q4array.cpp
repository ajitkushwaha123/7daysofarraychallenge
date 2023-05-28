#include<iostream>
using namespace std;

void sortedArray(int arr[] , int n){
    // for(int i = 0; i<n ; i++){
    //     for(int j=i+1; j<n ; j++){
    //         if(arr[i]<arr[j]){
    //             cout<<"Array is sorted"<<endl;
    //         }else{
    //             cout<<"Not Sorted"<<endl;
    //         }
    //     }
    // }

    for(int i = 0; i<n ;i++){
        if(arr[i+1]>arr[i]){
            cout<<"Sorted"<<endl;
        }else{
            cout<<"Not sorte"<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i= 0; i<n ; i++){
        cin>>arr[n];
    }

    sortedArray(arr , n);
    
}