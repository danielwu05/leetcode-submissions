class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp (n+1);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            if (i & (i-1)) {
                dp[i] = 1;
            }
            if (i%2 == 1) {
                dp[i] = dp[i-1] + 1;
            }
            else {
                dp[i] = dp[i/2];
            }
        }
        return dp;
        
    }
};
