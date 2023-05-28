#include<iostream>
#include<climits>
using namespace std;

int largestElementIndex(int arr[], int n){

    int maxi = INT_MIN ;
    int index = -1;

    for(int i= 0 ; i<n ; i++){
        if(arr[i] > maxi){
            maxi = arr[i] ;
            index = i;
        }
    }

    return index;
}

int main(){

    // 50 Question on array in 7 Days challenge

    //Q2.Find Second Smallest and Second Largest Element in an array?

    int n;
    cin>>n ; 

    int  arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    int largestIndex = largestElementIndex(arr , n);
    //cout<<largestIndex;
    
    int largestElement =  arr[largestIndex]; 
    for(int i=  0 ; i<n ; i++){
        if(arr[i] == largestElement){
            arr[i] = -1;
        }
    }

    int secondlargestIndex = largestElementIndex(arr , n);
    cout<<arr[secondlargestIndex];




    //Approch 2 for the same question Optimised 


//#include<iostream>
//#include<climits>
//using namespace std;

// int secondLargestElement(int arr[] , int n){
//     int max = INT_MIN;
//     int second_max = INT_MIN;

//     for(int i = 0; i<n ; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }

//     for(int i =0 ; i<n ; i++){
//         if(arr[i]>second_max && arr[i] != max){
//             second_max = arr[i];
//         } 
//     }

//     return second_max;
// }

// int main(){
//     int arr[5] = {1,2,3,5,5};
//     cout<<secondLargestElement(arr , 5);
// }
    
    
}