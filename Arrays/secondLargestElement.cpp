#include<bits/stdc++.h>

using namespace std;

int main(){

    int first = -1;
    int second = -1;

    int n;

    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter the va;ue for ["<<i<<"] index element: ";
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];

        }

        if(arr[i] > second && arr[i] < first){
            second = arr[i];
        }
    }

    cout<<"The first Largest is: "<<first<<endl;
    cout<<"The second Largest is: "<<second<<endl;

    return 0;
}