class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0;
        int total_mult = 1;
        vector <int> output;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0 || zeros >= 1) {
                total_mult *= nums[i];
            }
            else {
                zeros++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (zeros != 1) {
                if (nums[i] == 0) {
                    output.push_back(0);
                }
                else {
                    output.push_back(total_mult/nums[i]);
                }
            }
            else {
                if (nums[i] == 0) {
                    output.push_back(total_mult);

                }
                else {
                    output.push_back(0);
                }
            }
        }
        return output;
    }
};
