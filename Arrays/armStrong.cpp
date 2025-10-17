#include<iostream>

using namespace std;

bool isArmStrong(int n){
    int original = n;
    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return sum == original;
}

int main(){

    int n;

    cout<<"Enter the number to check whether the number is armstrong or not: ";
    cin>>n;

    bool ans = isArmStrong(n);

    if(ans){
        cout<<"The given number is armstrong";
    } else{
        cout<<"The given number is not armstrong";
    }

    return 0;
}