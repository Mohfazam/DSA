#include<iostream>

using namespace std;

int main(){
    string originalString;
    cout<<"Enter the Original String : ";
    getline(cin, originalString);
    cout<<"The reversed String is: ";

    for(int i = originalString.length()-1; i >= 0; i--){
        cout<<originalString[i];
    }
    return 0;
}