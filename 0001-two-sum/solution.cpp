class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash;
        std::vector<int> output(2);
        if (nums.size() == 2) {
            return {0, 1};
        }
        for (int i = 0; i < nums.size(); i++) {
                hash.insert({nums[i], i});
        }
        for (int i = 0; i < nums.size(); i++) {
                int complement = target-nums[i];
                if(hash.contains(complement) && hash[complement] != i) {
                    return { i, hash[complement]};
                }
        }
        return output;
    }
};
