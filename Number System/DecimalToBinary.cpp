//Easy Approach (6/10)

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;
    int ans = 0;
    int digit;
    int pow = 1;
    while(n!=0){
        digit = n % 2;
        ans += (digit * pow);
        n = n / 2;
        pow *= 10;
    }

    cout << "The Binary representation of: "<<temp<<" is:"<< ans;


    return 0;
}








//Fast and efficeint approach(10/10)

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     string binary = ""; // Store binary as string
//     int temp = n;

//     if (n == 0) binary = "0"; // Handle edge case for 0

//     while (n > 0) {
//         binary = char('0' + (n % 2)) + binary; // Prepend bit to string
//         n /= 2;
//     }

//     cout << "The Binary representation of " << temp << " is: " << binary << endl;
//     return 0;
// }
