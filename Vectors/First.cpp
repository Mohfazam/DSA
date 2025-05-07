#include<vector>
#include<iostream>


using namespace std;

int main(){
    vector<int> vec(4);
    vec[0] = 1;
    vec[1] = 2;
    vec[2] = 3;
    vec[3] = 4;

    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<endl;
    }

    return 0;
}