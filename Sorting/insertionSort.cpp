#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {13, 46, 24, 52, 20, 9};
    
    //Insertion sorting

    for(int i = 0; i < 6; i++){
        int min_index = i;

        for(int j = i+1; j < 6; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        swap(arr[i], arr[min_index]);
    }
    

    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}