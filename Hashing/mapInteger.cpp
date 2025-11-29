#include<bits/stdc++.h>

using namespace std;


int main(){
    map<int, int> hash;

    
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout<<"Enter the element at the index ["<<i<<"] : ";
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    for(auto p : hash){
        cout<<p.first<<" -> "<<p.second<<endl;
    }
    return 0;
}