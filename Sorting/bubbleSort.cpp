#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {13, 24, 46, 20, 9, 52};
    int n = 6;

    //Bubble Sort
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}