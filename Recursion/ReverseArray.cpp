#include<bits/stdc++.h>

using namespace std;

void reverse(int l, int r, int arr[]){
    if(l == r){
        return;
    }

    swap(arr[l], arr[r]);

    reverse(l+1, r-1, arr);
}

int main(){
    int left = 0;
    int right = 4;
    int arr[] = {1,2,3,4,5};

    reverse(left, right, arr);

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<endl;
    }
}