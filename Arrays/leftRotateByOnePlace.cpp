#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;

    int temp = arr[0];
    for(int i = 0; i < n; i++){
        swap(arr[i-1], arr[i]);
    }

    arr[n-1] = temp;

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}