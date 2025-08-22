#include<iostream>
#include<vector>


using namespace std;


void InsertionSort(vector<int> &arr, int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];

        int j = i-1;

        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];

            j--;
        }

        arr[j+1] = temp;
    }
}

void printArray(vector<int> &arr, int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){

    vector<int> arr = {9,8,7,6,5,4,3,2,1};
    //sodiveduvedvninde

    int n = arr.size();

    cout<<"Before Sorting"<<endl;

    printArray(arr, n);

    InsertionSort(arr, n);
    
    cout<<"After  Sorting"<<endl;

    printArray(arr, n);


    return 0;
}