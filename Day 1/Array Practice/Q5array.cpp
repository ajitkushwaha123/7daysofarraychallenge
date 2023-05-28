#include<iostream>
using namespace std;
int main(){

    // Q5. Find all pairs with a given sum ?
    // Q50 Question on array in 7 Days challenge

    int n;
    int x;
    cin>>n>>x;
    int arr[n];

    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    int count = 0;

    for(int i= 0; i<n ; i++){
        for(int j = i+1; j<n ; j++){
            if(arr[i] + arr[j] == x){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}