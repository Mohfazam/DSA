//print sum of N values using recursion
#include<bits/stdc++.h>

using namespace std;

void nsum(int n, int sum){
    if(n < 0){
        cout<<"The sum is : "<<sum;
        return;
    }

    return nsum(n-1, sum+n);

}

int main(){

    cout<<"Enter the value of N : ";
    int n;
    cin>>n;

    nsum(n, 0);
    return 0;
}