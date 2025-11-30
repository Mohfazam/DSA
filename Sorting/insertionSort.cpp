#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {12, 9, 15, 16, 8, 13};
    int n = 6;
    for(int i = 0; i < n; i++){

        int j = i;

        while( j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}