#include<bits/stdc++.h>

using namespace std;


//Brute Force
int maxProfit(vector<int>& prices) {
        int profit = INT_MIN;

        for(int i = 0; i < prices.size(); i++){
            int sum = 0;
            for(int j = i; j < prices.size(); j++){
                if(prices[j] - prices[i] > profit){
                    profit = prices[j] - prices[i];
                }
            }
        }

        return profit;
    }

    //Better Solution
    int maxProfitBetter(vector<int>& prices) {
        int minn = prices[0];

        int profit = 0;

        for(int i = 1; i < prices.size(); i++){
            int cost =  prices[i] - minn;
            profit = max(profit, cost);

            minn = min(prices[i], minn);
        }

        return profit;
    }

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int ans = maxProfitBetter(prices);

    cout<<"The Maximumm Profit is : "<<ans;

    return 0;
}