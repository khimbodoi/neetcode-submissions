class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool sqr[9][10] = {false};
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                int num = board[i][j] - '1';
                if (row[i][num] == true) return false;
                row[i][num] = true;
                if (col[j][num] == true) return false;
                col[j][num] = true;
                if (sqr[(i / 3) * 3 + j / 3][num] == true) return false;
                sqr[(i / 3) * 3 + j / 3][num] = true;
            }
        }
        return true;
    }
};
