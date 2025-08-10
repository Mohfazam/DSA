#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = {3, 5, 2, 1, 5, 12, 8, 6};

    int n = arr.size();


    cout<<"Before Sorting: ";

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }

    for(int i = 0; i < n; i++){

        int currentMin = i;

        for(int j = i; j < n; j++){
            if(arr[j] < arr[currentMin]){
                currentMin = j;
            }
        }

        swap(arr[currentMin], arr[i]);
    }

    cout<<"After Sorting: ";

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}