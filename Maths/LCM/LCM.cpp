#include<iostream>

using namespace std;

int GCD(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        } else{
            b = b % a;
        }
    }

    if(a == 0) return b;

    return a;
}

int main(){
    int a, b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    int lcm = (a*b) / GCD(a,b);
 
    cout<<"The LCM of "<<a<<" and "<<b<<" is : "<<lcm;
    return 0;
}