class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for (int n : nums) {
            map[n]++;
        }

        vector<pair<int, int>> vec;

        for (const auto& [num, freq] : map) {
            vec.push_back({freq, num}); 
        }

        sort(vec.begin(), vec.end(), greater<>()); 

        vector<int> solution(k);

        for (int i = 0; i < k; i++) {
            solution[i] = vec[i].second;
        }

        return solution;
    }
};
