//smallest and largest number in an array
#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
    int min = INT_MAX;
    int maxx = INT_MIN;
    int size = 10;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout<<"Enter the element at the index: "<<i<<" : ";
        cin>>arr[i];
    }

    //finding smallest and largest
    for(int i = 0; i < size; i++){
        if(arr[i] > maxx){
            // max = arr[i];
            maxx = max(arr[i], maxx);
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<"The Smallest number is : "<<min<<endl<<"The Largest Number is : "<<maxx<<endl;
}