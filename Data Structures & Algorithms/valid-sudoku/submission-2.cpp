class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int boxes[9][9] = {0};
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    int k = (i / 3) * 3 + (j / 3);
                    if (rows[i][num] || cols[j][num] || boxes[k][num]) {
                        return false;
                    }
                    rows[i][num] = 1;
                    cols[j][num] = 1;
                    boxes[k][num] = 1;
                }
            }
        }
        return true;
    }
};