#include<iostream>
using namespace std;
int main(){
    int  n;
    cin>>n;

    int arr[n];

    int j = 0;
    for(int i = 1; i<=n ;i++){
        arr[j++] = i;
    }

    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<endl;
    }

    int multiple =1;

    for(int i = 0; i<n ;i++){
        multiple = multiple*arr[i];
    }

    cout<<multiple;

}