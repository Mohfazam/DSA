#include<bits/stdc++.h>

using namespace std;
//Brute Force
vector<int> leaderInTheArray(vector<int>& nums){
    int n = nums.size();

    vector<int> ans;

    for(int i = 0; i < nums.size(); i++){
        int isLeader = true;

        for(int j = i+1; j < nums.size(); j++){
            if(nums[j] > nums[i]){
                isLeader = false;
                break;
            }
        }

        if(isLeader){
            ans.push_back(nums[i]);
        }
    }

    return ans;
}

//Optimal Approach

vector<int> leaderInTheArrayOptimal(vector<int>& nums){
    int n = nums.size()-1;

    int maxi = INT_MIN;
    vector<int> ans;

    for(int i = n; i >= 0; i--){
        if(nums[i] > maxi){
            ans.insert(ans.begin(), nums[i]);
            maxi = nums[i];
        }
    }

    return ans;
}


int main(){

    vector<int> nums = {10, 22, 12, 3, 3, 0, 6};
    int n = nums.size();

    vector<int> res = leaderInTheArrayOptimal(nums);

    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }

    return 0;
}