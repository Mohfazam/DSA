// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int charHash[26] = {0};

//     string ch;
//     cout<<"Enter the String: ";
//     cin>>ch;

//     for(int i =0; i < ch.size(); i++){
//         charHash[ch[i] - 'a']++;
//     }

//     for(int i = 0; i < 26; i++){
//         cout<<char(i+'a')<<" -> ";
//         cout<<charHash[i]<<endl;
//     }
//     return 0;
// }






#include<bits/stdc++.h>

using namespace std;

int main(){
    int charHash[256] = {0};

    string ch;
    cout<<"Enter the String: ";
    cin>>ch;

    for(int i =0; i < ch.size(); i++){
        charHash[ch[i]]++;
    }


    for(int i = 0; i < 256; i++){
        cout<<char(i)<<" -> ";
        cout<<charHash[i]<<endl;
    }
    return 0;
}