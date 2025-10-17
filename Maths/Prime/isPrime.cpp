#include<iostream>

using namespace std;

string isPrime(int n){
    for(int i = 2; i*i < n; i++){
        if(n % 1 == 0){
            return "Not A Prime";
        }
    }

    return "Is Prime";
}

int main(){

    int n;
    cout<<"Enter a number to check whether its a prime or not:";
    cin>>n;

    string ans = isPrime(n);

    cout<<ans;

    return 0;
}