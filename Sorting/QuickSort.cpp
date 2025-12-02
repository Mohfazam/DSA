#include<bits/stdc++.h>

using namespace std;

int pivot(int arr[], int low, int high){
    int pivotValue = arr[low];

    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivotValue && i < high){
            i++;
        }

        while(arr[j] >= pivotValue && j > low){
            j--;
        }

        if(i < j){
        swap(arr[i], arr[j]);
        }
    }

    

    swap(arr[low], arr[j]);

    return j;
}

void QuickSort(int arr[], int low, int high){
    if(low < high){
        int paritionIndex = pivot(arr, low, high);

        QuickSort(arr, low, paritionIndex-1);
        QuickSort(arr, paritionIndex+1, high);
    }
}

int main(){

    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int low = 0; 
    int high = 7;

    QuickSort(arr, low, high);

    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}