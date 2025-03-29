//Reverse an Array using two pointer Approach

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of the array : ";
    cin>>n;

    int arr[n];
    int first = 0;
    int last = n-1;


    for(int i = 0; i < n; i++){
    cout<<"Enter the element for the index "<<i+1<<" : ";

        cin>>arr[i];
    }

    for(int i = 0; i < n/2; i++){
        swap(arr[first], arr[last]);

        // int temp = arr[first];
        // arr[first] = arr[last];
        // arr[last] = temp;

        first++;
        last--;
    }

    // while(first < last){
    //     int temp = arr[first];
    //     arr[first] = arr[last];
    //     arr[last] = temp;

    //     first++;
    //     last--;
    // }

    cout<<"The Reversed array is: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i];
        cout<<"\t";
    }

    return 0;
}