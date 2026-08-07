class NumArray {
private:
    int * sum;
    
public:
    NumArray(vector<int>& nums) {
        sum = &nums[0];
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i - 1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if (left > 0) return *(sum + right) - *(sum + left - 1);
        return *(sum + right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
