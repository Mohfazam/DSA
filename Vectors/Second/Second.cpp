#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec = {1, 2, 3, 4, 5};

    cout<<vec.size()<<endl;

    for(int i : vec){
        cout<<i<<endl;
    }
    vec.push_back(6);
    cout<<"Added Element to the back"<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }


    return 0;
}