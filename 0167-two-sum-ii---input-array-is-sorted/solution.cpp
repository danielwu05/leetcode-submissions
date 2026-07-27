class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size()-1;
        int i = 0;        
        while(i < j) {
            int current_sum = numbers[i] + numbers[j];
            if (current_sum > target) {
                j--;
            }
            else if (current_sum < target) {
                i++;
            }
            else {
                return {i + 1, j + 1};
            }
        } 
        return {};
    }
};
