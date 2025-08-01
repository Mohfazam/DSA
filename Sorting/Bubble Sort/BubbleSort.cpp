#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {15, 16, 18, 5};

    int n = nums.size();

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(nums[j] < nums[j+1]){
                swap(nums[j], nums[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<nums[i]<<endl;
    }

    return 0;
}