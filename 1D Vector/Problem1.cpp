#include<iostream>
#include<vector>

using namespace std;
int main(){

    // <----------------------- First approch using array --------------------->
    int n;
    cin>>n;

    int arr[n];

    for(int i =0; i<n ; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int count = 0;

    int index;

    for(int i= 0; i<n ; i++){
        if(arr[i] == x){
            count++;
        }
    }

    int newArray[count];

    int j = 0;

    for(int i =0; i<n ; i++){
        if(arr[i] == x){
            newArray[j++] = i;
        }
    }
    

    for(int i =0; i<count ;i++){
        cout<<newArray[i]<<" ";
    }

    cout<<newArray[count-1];


}