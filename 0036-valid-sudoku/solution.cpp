class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector <unordered_map <int,int>> column(9);
        vector <unordered_map <int,int>> subboxes(9);

        for (int i = 0; i < board.size(); i++) {
            unordered_map <int,int> row;
            for (int j = 0; j < board.size(); j++) {
                if (board[i][j] != '.'){
                    column[j][board[i][j]]++;
                    row[board[i][j]]++;
                    int box_index = (i / 3) * 3 + (j / 3);
                    subboxes[box_index][board[i][j]]++;
                }
            }
            for (const auto& pair : row) {
                if (pair.second >= 2) {
                    return false;
                }
            }
            
        }
        for (const auto& lmnt: column) {
            for (const auto& pair : lmnt) {
                if (pair.second >= 2) {
                    return false;
                }
            }
        }
        for (const auto& lmnt: subboxes) {
            for (const auto& pair : lmnt) {
                if (pair.second >= 2) {
                    return false;
                }
            }
        }
        return true;
    }
};
