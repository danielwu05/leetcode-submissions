class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int max_area;
        while (i < j) {
            int curr_area = min(height[i], height[j]) * (j - i);
            max_area = max(max_area, curr_area);
            
            if (height[i] < height[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return max_area;
    }
};
