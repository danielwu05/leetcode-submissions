class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;

        pascal.push_back({ 1 });
        int n = 1;

        while(n < numRows) {
            vector<int> vec(n + 1);
            vec[0] = 1;
            vec[n] = 1;
            for (int i = 1; i < n; i++) {
                vec[i] = pascal[n-1][i] + pascal[n-1][i - 1];
            }
            pascal.push_back(vec);
            n++;
        }
        return pascal;
        
    }
};
