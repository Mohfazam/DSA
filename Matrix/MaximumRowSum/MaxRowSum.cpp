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

    int maxRowSum = 0;

    for(int i = 0; i < 3; i++){
        int rowSum = 0;
        for(int j = 0; j < 3; j++){
            rowSum += arr[i][j];
        }

        maxRowSum = max(maxRowSum, rowSum);
    }

    cout<<"The Maximum Row Sum is : "<<maxRowSum;

    return 0;
}