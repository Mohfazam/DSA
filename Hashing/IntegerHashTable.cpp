#include<bits/stdc++.h>

using namespace std;


int main(){
   int arr[] = {1,2,1,3,2};
   
   vector<int> hash(5, 0);

   for(int i = 0 ; i < 5; i++){
        hash[arr[i]]++;
   }

   for(int i = 0; i < 5; i++){
    cout<<hash[i];
   }

   return 0;
}