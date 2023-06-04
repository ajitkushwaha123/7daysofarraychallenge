#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);

    cout<<"size 1 : "<<v.size()<<endl;

    v.push_back(2);

    cout<<"size 2 : "<<v.size()<<endl;

    v.push_back(3);

    cout<<"size 3 : "<<v.size()<<endl;

    v.push_back(4);

    cout<<"size 4 : "<<v.size()<<endl;

    v.push_back(5);

    cout<<"size 5 : "<<v.size()<<endl;

    for(int i = 0; i<v.size() ; i++){
        cout<<v[i];
    }cout<<endl;

    v.pop_back();

    cout<<"size after pop back : "<<v.size()<<endl;

    for(int i = 0; i<v.size() ; i++){
        cout<<v[i];
    }cout<<endl;

    v.insert(v.begin()+3 , 6);

    cout<<"size after inserting : "<<v.size()<<endl;

    for(int i = 0; i<v.size() ; i++){
        cout<<v[i];
    }cout<<endl;

    v.erase(v.begin()+3);

    for(int i = 0; i<v.size() ; i++){
        cout<<v[i];
    }cout<<endl;

    v.clear();

    cout<<"size after clearing : "<<v.size()<<endl;

    for(int i = 0; i<v.size() ; i++){
        cout<<v[i];
    }cout<<endl;

    v.push_back(5);

    for(int i = 0; i<v.size() ; i++){
        cout<<v[i];
    }cout<<endl;
}