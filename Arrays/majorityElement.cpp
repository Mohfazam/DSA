#include<bits/stdc++.h>

using namespace std;
//Brute Force
int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }   

            if(count > n / 2){
                return nums[i];
            }
        }

        return -1;
    }


    //Better Solution

    int majorityElementWithHashing(vector<int>& nums) {
        map<int, int> ans;

        for(int i = 0; i < nums.size(); i++){
            ans[nums[i]]++;
        }

        int maxx = INT_MIN;
        int answer = 0;

        for(auto it : ans){
            if(it.second > maxx){
                maxx = it.second;
                answer = it.first;
            }
        }

        return answer;
    }

int main(){
    vector<int> nums = {2,2,1,1,1,2,2}; 
    int ans = majorityElementWithHashing(nums);
    cout<<"The Majority element is : "<<ans;
    return 0;
}