#include<bits/stdc++.h>
using namespace std;
int main(){

    int r , c ;
    cin>>r>>c;

    int A[r][c];

    for(int i = 0 ; i<r ; i++){
        for(int j =0; j<c ; j++){
            cin>>A[i][j];
        }
    }

    for(int i = 0; i<r ; i++){
        for (int j = 0; j<c ; j++){
            cout<<A[i][j]<<" ";
        }

        cout<<endl;
    }

    int B[c][r];

    for(int i = 0; i<c ; i++){
        for (int j = 0; j<r ; j++){
            B[i][j] = A[j][i];
        }
    }


     for(int i = 0; i<c ; i++){
        for (int j = 0; j<r ; j++){
            cout<<B[i][j]<<" ";
        }

        cout<<endl;
    }

}