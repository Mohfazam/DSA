#include<iostream>
#include<math.h>

using namespace std;

int BtoD(int n){
    int pow = 1;
    int ans = 0;
    while(n != 0){
        int digit = n % 10;
        ans += (digit * pow);
        n = n/10;
        pow *= 2;
    }

    return ans;
}

int main(){
    int x;
    cout<<"Enter the Binary Number: ";
    cin>>x;
    int result = BtoD(x);
    cout<<"the answer is : "<<result;

    return 0;
}