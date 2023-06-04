#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> v;  // Declared a vector v

    cout<<"Size of vector : ";

    int n;  // n is something which defines the loop stoping condition 
    cin>>n;
    
    cout<<endl;

    for(int i =0; i<n ; i++){
        int element;           // Element of vector
        cin>>element;                     

        v.push_back(element);      //Pushing element to vector
    }

    int x;

    cout<<"Check Occurence of :";

    cin>>x;

    cout<<endl;

    int count = 0;

    for(int i=0; i<v.size() ; i++){
        if(v[i] == x){
            count++;
        }
    }

    vector<int> w;

    for(int i =0; i<v.size(); i++){
        if(v[i] == x){
            w.push_back(i);
        }
    }
    
    cout<<count<<endl;

    for(int i =0; i<count ; i++){
        cout<<w[i]<<" ";
    }cout<<endl;

    cout<<w[count-1];
}