#include<iostream>
using namespace std;
int main(){

    // 50 Question on array in 7 Days challenge

    //Q3. Rotate an array by k place ? Problem

    // 8299727665

    int n , k;
    cin>>n>>k;

    int arr[n] ;

    for(int i= 0 ;i<n ; i++){
        cin>>arr[i];
    }


    k = k%n;

    int rotatedArray[5];
    int j = 0;

    for(int i = n-k ; i<n ; i++){
        rotatedArray[j++] = arr[i];
        
    }

    for(int i = 0; i<=k ; i++){
        rotatedArray[j++] = arr[i];
        
    }

    for(int i = 0; i<n ; i++){
        cout<<rotatedArray[i];
    }

}