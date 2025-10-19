#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[4][4];

    int count = 1;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            arr[i][j] = count;
            count++;
        }
    }

    cout<<"The 4X4 Matrix is : "<<endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<<"\t";
        }

        cout<<endl;
    }

    return 0;
}