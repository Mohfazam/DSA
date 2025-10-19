#include<bits/stdc++.h>

using namespace std;

pair<int, int> LinearSearch(int arr[][3], int key){
    pair<int, int> ans = {-1, -1};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == key){
                ans.first = i;
                ans.second = j;

                return ans;
            }
        }

    }
    return ans;

}

int main(){
    int arr[3][3];
    int key;

    cout<<"Enter the Values in the matrix : "<<endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Enter the value at the index "<<i<<" and "<<j<<" : ";
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the key : ";
    cin>>key;

    pair<int, int> ans= LinearSearch(arr, key);

    cout<<"The Index at where the key : "<<key<<" located is : "<<"("<<ans.first<<","<<ans.second<<")";

    return 0;
}