class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1);

        dp[0] = 0;
        dp[1] = 0;

        for (int i = 2; i <= cost.size(); i++) {
            int option1 = dp[i - 1] + cost[i - 1]; 
            int option2 = dp[i - 2] + cost[i - 2]; 
            dp[i] = min(option1, option2);
        }

        return dp[cost.size()];
    }
};
