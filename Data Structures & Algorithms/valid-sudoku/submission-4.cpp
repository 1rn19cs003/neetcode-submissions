class Solution {
   public:
    bool checkRow(vector<vector<char>>& board, int row) {
        vector<bool> vis(128, false);
        for (int i = 0; i < board.size(); i++) {
            int val = board[row][i];
            if (vis[val] != true) {
                if (val != '.') {
                    vis[val] = true;
                } else
                    continue;
            } else {
                return false;
            }
        }
        return true;
    }
    bool checkCol(vector<vector<char>>& board, int col) {
       vector<bool> vis(128, false);
        for (int i = 0; i < board.size(); i++) {
            int val = board[i][col];
            if (vis[val] != true) {
                if (val != '.') {
                    vis[val] = true;
                } else
                    continue;
            } else {
                return false;
            }
        }
        return true;
    }
    bool checkBox(vector<vector<char>>& board) {
        vector<vector<int>> grids = {{0, 0}, {0, 3}, {0, 6}, {3, 0}, {3, 3},
                                     {3, 6}, {6, 0}, {6, 3}, {6, 6}};
        for (int i = 0; i < grids.size(); i++) {
           vector<bool> vis(128, false);

            int row_start = grids[i][0];
            int col_start = grids[i][1];

            for (int j = row_start; j < row_start+3; j++) {
                for (int k = col_start; k < col_start + 3; k++) {
                    int val = board[j][k];
                    // cout << j << " " << k <<" | "<<row_start<<" "<<col_start<<endl;
                    if (vis[val] != true) {
                        if (val != '.') {
                            vis[val] = true;
                        } else
                            continue;
                    } else {
                        cout<<"box "<<i<<endl;
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<std::vector<bool>> flag(board.size(), vector<bool>(board[0].size(), false));
        for (int i = 0; i < board.size(); i++) {
            if (checkRow(board, i) == false) {
                cout<<"row "<<i<<endl;
                return false;
            }
            if (checkCol(board, i) == false) {
                cout<<"col "<<i<<endl;
                return false;
            }

            if(checkBox(board)==false){
                return false;
            }
        }
        return true;
    }
};
