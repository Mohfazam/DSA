
//Factorial of first n numbers
//Functional sum
#include<bits/stdc++.h>

using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){

    cout<<"Enter the value of N : ";
    int n;
    cin>>n;

    int factorial = fact(n);
    cout<<"The factorial is : "<<factorial;
    return 0;
}