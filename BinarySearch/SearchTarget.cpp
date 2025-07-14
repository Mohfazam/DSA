#include<iostream>

using namespace std;

int main(){
    int target;
    int n;
    int arr[n];

    cout<<"Enter the Size of the array: ";
    cin>>n;

    cout<<"Enter the Target Value: ";
    cin>>target;

    for(int i = 0; i < n; i++){
        cout<<"Enter the Value of index "<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<"Array elements "<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Value: "<<i<<arr[i]<<endl;
        
    }

    return 0;

}