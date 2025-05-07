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

    vec.pop_back();
    cout<<"Popper Element to the back"<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }

    cout<<"Printing Value from the front: "<<vec.front()<<endl;
    cout<<"Printing from an specific index: "<<vec.at(1);

    return 0;
}