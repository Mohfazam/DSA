#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr1[] = {1,2,2,3,3,4,5,6};
    int arr2[] = {2,3,3,5,6,6,7};

    vector<int> ans;

    int i = 0;
    int j = 0;
    while(i < 8 && j < 7){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
            continue;
        }

        if(arr1[i] < arr2[j]){
            i++;
        }else if(arr2[j] < arr1[i]){

            j++;
        }

    }

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}