class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>pascal;
        pascal.push_back({ 1 });
        int idx = 1;

        if (rowIndex == 0) {
            return {1};
        }

        while (idx <= rowIndex) {
            vector<int> vec (idx + 1);
            vec[0] = 1;
            vec[idx] = 1;
            for (int i = 1; i < idx; i++) {
                vec[i] = pascal[idx - 1][i] + pascal[idx - 1][i-1]; 
            }
            pascal.push_back(vec);
            idx++;
        }
        return pascal[rowIndex];
        
    }
};
