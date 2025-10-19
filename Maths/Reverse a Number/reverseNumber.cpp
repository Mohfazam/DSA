#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;

    cout<<"Enter a Number : ";

    cin>>number;
    int originalNumber = number;
    int reverseNumber = 0;
    while(number != 0){
        int digit = number % 10;
        reverseNumber = (reverseNumber * 10) + digit;

        number /= 10;
    }

    cout<<"Original Number: "<<originalNumber<<" After reversing : "<<reverseNumber;
}