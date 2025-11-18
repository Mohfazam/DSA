//print name 5 times using recursion
#include<bits/stdc++.h>

using namespace std;

void name(int n, string value){
    if(n == 0){
        return;
    }

    cout<<value<<endl;;

    name(n-1, value);

}

int main(){

    string na = "Sarwar";
    int n = 5;

    name(n, na);
    return 0;
}