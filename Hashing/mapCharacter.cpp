#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> hash;

    string str;

    cout<<"Enter the string: ";
    cin>>str;

    for(int i = 0; i < str.size(); i++){
        hash[str[i]]++;
    }

    for(auto p : hash){
        cout<<p.first<<" -> "<<p.second<<endl;
    }

    return 0;
}