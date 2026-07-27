class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map <int, int> seq;

        if (nums.size()==0) {
            return 0;
        }

        for (int i = 0; i < nums.size(); i++) {
            seq[nums[i]]++;
            
        }

        
        int max_streak=0;
        int current_streak=1;
        
        int store;
        
        for (auto i = seq.begin(); i != seq.end(); i++) {
            if (i->first == store + 1) {
                current_streak++;
            }
            else {
                max_streak = max(max_streak, current_streak);
                current_streak = 1;
            }
            store = i-> first;
        }
        max_streak = max(max_streak, current_streak); 
        return max_streak;
    }
};
