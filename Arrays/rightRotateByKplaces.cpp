#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int k = 3;
    int n = 7;

    k = k % n;

    reverse(arr, arr+n);
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);

    for(int i = 0 ; i < 7; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}