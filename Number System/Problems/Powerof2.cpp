// 1: Find if a number is power of 2 Without Loops.

#include<iostream>

bool isPowerOfTwo(int n){
    if(n <= 0){
        return false;
    }

    while(n > 1){
        if(n % 2 != 0){
            return false;
        }
        n = n/2;
    }

    return true;
}
using namespace std;

int main(){
    int n;

    cout<<"Enter an Number: ";
    cin>>n;
    int ans = isPowerOfTwo(n);
    if(ans){
        cout<<n<<" is power of two ";
    }
    else{
        cout<<n<<" is not a power of two ";

    }

    return 0;
}