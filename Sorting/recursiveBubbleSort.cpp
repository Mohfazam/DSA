#include<bits/stdc++.h>

using namespace std;

void recursiveBubbleSort(int arr[], int i, int j, int n){
    if(i == n -1) return;

    if(j == n - i - 1){
        recursiveBubbleSort(arr, i+1, 0, n);
        return;
    }

    if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
    }

    recursiveBubbleSort(arr, i, j+1, n);

}

int main(){

    int arr[] = {3,1,2,4,1,2,4};;

    int i = 0;
    int j = 0;
    int n = 6;
    recursiveBubbleSort(arr, i, j, n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}