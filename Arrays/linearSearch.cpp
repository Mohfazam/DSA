#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int key;
    int arr[n];
    int ans;
    cout<<"Enter the Size of the array : ";
    scanf("%d", &n);

    cout<<"Enter the key to find in the array : ";
    scanf("%d", &key);

    for(int i = 0; i < n; i++){
        cout<<"Enter the Element at the index ["<<i<<"] : ";
        cin>>arr[i];
    }


    for(int i = 0; i< n; i++){
        if(arr[i] == key){
            ans = i;
            break;
        }
    }

    cout<<"The key is at the index : "<<ans;

    return 0;
}