#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[3][3];

    cout<<"Enter the Values in the matrix : "<<endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Enter the value at the index "<<i<<" and "<<j<<" : ";
            cin>>arr[i][j];
        }
    }

    int sum = 0;

    for(int row = 0; row < 3; row++){
        sum += arr[row][row];
    }

    cout<<"The Diagonal Sum is : "<<sum;


    return 0;
}