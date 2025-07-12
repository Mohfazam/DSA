#include<iostream>

using namespace std;

int changeA(int &x){
    x = x + 10;
    return x;
}

int main(){

    int a = 10;
    cout<<a<<endl;
    cout<<changeA(a)<<endl;
    cout<<a<<endl;


    return 0;
}