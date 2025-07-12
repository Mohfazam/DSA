#include<iostream>

using namespace std;

int changeA(int *a){
    *a = *a + 10;
    return *a;
}

int main(){

    int a = 10;
    cout<<a<<endl;
    cout<<changeA(&a)<<endl;
    cout<<a<<endl;


    return 0;
}