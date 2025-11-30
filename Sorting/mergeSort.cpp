#include<bits/stdc++.h>

using namespace std;

void mergeArray(int arr[], int low, int mid, int high){
    int left = low;
    int right = mid+1;
    int index = 0;

    int temp[high - low + 1];

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp[index] = arr[left];
            index++;
            left++;
        } else{
            temp[index] = arr[right];
            index++;
            right++;
        }
    }

    while(left <= mid){
        temp[index] = arr[left];
        index++;
        left++;
    }

    while(right <= high){
        temp[index] = arr[right];
        index++;
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high){
    int mid = (low + high)/2;

    if( low >= high){
        return;
    }

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);

    mergeArray(arr, low, mid, high);
}

int main(){

    int arr[] = {3,1,2,4,1,5,6,2,4};
    int low = 0;
    int high = 8;
    mergeSort(arr, low, high);

    for(int i = 0; i <= high; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}