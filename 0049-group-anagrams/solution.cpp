class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for (string s : strs) {
            string c = s;
            sort(c.begin(), c.end());
            map[c].push_back(s);
        }

        vector <vector<string>> solution;

        for (auto a : map) {
            solution.push_back(a.second);
        }

        return solution;
    }
};
