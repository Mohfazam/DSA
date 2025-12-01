#include<bits/stdc++.h>

using namespace std;

void recursiveInsertionSort(int arr[], int n, int i, int j){
    if(i == n) return;
    if(j > 0 && arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
        recursiveInsertionSort(arr, n, i, j-1);
    }

    
    recursiveInsertionSort(arr, n, i+1, j+1);

}

int main(){

    int arr[] = {3,1,2,4,1,2,4};
    int n = 7;
    int i = 0;
    int j = i;

    recursiveInsertionSort(arr, n, i, j);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}