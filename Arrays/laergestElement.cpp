#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {3,2,1,5,2};
    int n = 5;

    int maxElement = INT_MIN;

    for(int i = 0; i < n; i++){
        maxElement = max(arr[i], maxElement);
    }

    cout<<"The maximum element is: "<<maxElement;

    return 0;
}