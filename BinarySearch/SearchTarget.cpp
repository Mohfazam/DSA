#include<iostream>

using namespace std;

int main(){
    int target;
    int n;
    

    cout<<"Enter the Size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the Target Value: ";
    cin>>target;

    for(int i = 0; i < n; i++){
        cout<<"Enter the Value of index "<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<"Array elements "<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Value: "<<arr[i]<<endl;
        
    }

    //Binary Search

    int index;

    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = low + (high - low) /2;

        if(arr[mid] > target){
            high = mid - 1;
        }

        if(arr[mid] < target){
            low = mid + 1;
        }

        if(arr[mid] == target){
            index = mid;
            break;
        }
    }

    cout<<"The target value is at the index: "<<index<<endl;

    return 0;

}