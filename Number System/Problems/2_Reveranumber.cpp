// 2: Reverse a number and print the full reversed number

#include<iostream>

using namespace std;

int reverse(int n){
    int ans = 0;
    while(n != 0){
        int digit  = n % 10;
        ans = (ans * 10) + digit;
        n /= 10;
    }  
    return ans;
}

int main(){
    int n;

    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Original: "<<n<<endl;
    cout<<"Reversed: "<<reverse(n);
}