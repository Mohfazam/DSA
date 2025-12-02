#include<bits/stdc++.h>

using namespace std;

void recursiveSelectionSort(int arr[], int n, int i){
    if(i == n) return;

    

    int minIndex = arr[i];
}

int main(){
    int arr[] = {3, 1, 2, 4, 1, 2, 4};
    int n = 7;

    for(int i = 0; i< n; i++){
        int minIndex = i;
        for(int j = i +1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}