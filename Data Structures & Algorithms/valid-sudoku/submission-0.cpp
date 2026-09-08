class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> count;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (count.find(board[i][j]) != count.end()) return false;
                count[board[i][j]]++;
            }
        }
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> count;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') continue;
                if (count.find(board[j][i]) != count.end()) return false;
                count[board[j][i]]++;
            }
        }
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> count;
            int startRow = (i / 3) * 3;
            int startCol = (i % 3) * 3;
            for (int r = 0; r < 3; r++) {
                for (int c = 0; c < 3; c++) {
                    char val = board[startRow + r][startCol + c];
                    if (val == '.') continue;
                    if (count.find(val) != count.end()) return false;
                    count[val]++;
                }
            }
        }
        return true;
    }
};