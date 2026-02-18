#include<bits/stdc++.h>
using namespace std;

int mergeArray(int arr[], int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    int index = 0;

    int temp[high - low + 1];
    int count = 0;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp[index++] = arr[left++];
        } else {
            count += (mid - left + 1);
            temp[index++] = arr[right++];
        }
    }

    while(left <= mid){
        temp[index++] = arr[left++];
    }

    while(right <= high){
        temp[index++] = arr[right++];
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }

    return count;
}

int mergeSort(int arr[], int low, int high){
    if(low >= high){
        return 0;
    }

    int mid = low + (high - low) / 2;

    int left = mergeSort(arr, low, mid);
    int right = mergeSort(arr, mid + 1, high);
    int merge = mergeArray(arr, low, mid, high);

    return left + right + merge;
}

int main(){
    int arr[] = {1,3,5,10,2,6,8,9};
    int n = 8;

    int final = mergeSort(arr, 0, n-1);

    cout<<"The count of inversions is: "<<final;

    return 0;
}
