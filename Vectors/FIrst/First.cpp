#include<vector>
#include<iostream>


using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4};
    

    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<endl;
    }

    cout<<"For Each Loop"<<endl;
    for(int i: vec){
        cout<<i<<endl;
    }

    return 0;
}