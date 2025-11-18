//print name 5 times using recursion
#include<bits/stdc++.h>

using namespace std;

void name(int n, string value){
    if(n == 0){
        return;
    }

    
    name(n-1, value);
    cout<<value<<": "<<n<<endl;

}

int main(){

    string na = "Sarwar";
    int n = 5;

    name(n, na);
    return 0;
}