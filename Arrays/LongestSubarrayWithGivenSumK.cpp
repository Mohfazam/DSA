#include<bits/stdc++.h>

using namespace std;
int main(){

    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int n = 10;

    int len = 0;
    //Brute Force Approach


    
    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for(int j = i; j < n; j++){
    //             sum += arr[j];
    //         if(sum == k){
    //             len = max(len, (j-i+1));
    //         }
    //     }
    // }

    //Optimal Solution

    int i = 0; 
    int j = 0;
    int sum = 0;
    while(j < n){
        sum += arr[j];
        while(i < j && sum > k){
            sum -= arr[i];
            i++;
        }

        if(sum == k){
            len = max(len, j-i+1);
        }

        j++;


    }

    cout<<"The maximum length is : "<<len;

    return 0;
}