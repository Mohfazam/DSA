#include<bits/stdc++.h>

using namespace std;

vector<int> twoSumbWithoutMap(vector<int>& nums, int target) {
        vector<int> temp = (nums);
        sort(nums.begin(), nums.end());
        int a = 0, b = 0;
        int i = 0;
        int j = nums.size()-1;

        while(i < j){
            if(nums[i] + nums[j] == target){
                a = nums[i];
                b = nums[j];
                break;
            }
            else if(nums[i] + nums[j] > target){
                j--;
            }else{
                i++;
            }
        }

        int x  = -1;
        int y = -1;

        for(int i = 0; i < temp.size(); i++){
            if(temp[i] == a && x == -1){
                x = i;
            }else if(temp[i] == b && y == -1){
                y = i;
            }
        }

        return {x, y};
    }


//Better Solution
vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> ans;

        for(int i = 0; i < nums.size(); i++){
            int a = nums[i];
            int b = target - a;

            if(ans.find(b) != ans.end()){
                return {ans[b], i};
            }

            ans[a] = i;
        }

        return {};
    }

int main(){
    vector<int> nums = {2,7,11,15}; 
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    cout << "[" << ans[0] << ", " << ans[1] << "]";
    return 0;
}