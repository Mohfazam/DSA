#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,3,5,10,2,6,8,9};
    int n = 8;

    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(i < j && arr[i] > arr[j]){
                count++;
            }
        }
    }

    cout<<"The count of inversions is: "<<count;

    return 0;
}