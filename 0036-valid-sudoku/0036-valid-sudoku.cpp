class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            unordered_set<int> Cfreq;
            unordered_set<int> Rfreq;
            unordered_set<int> box;
            for (int j = 0; j < board.size(); j++) {
                if(board[i][j]!='.'){
                    if (Cfreq.count(board[i][j]))return false;
                    Cfreq.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if (Rfreq.count(board[j][i]))return false;
                    Rfreq.insert(board[j][i]);
                }
                if(board[(i/3)*3+j/3][( i%3)*3+j%3]!='.'){
                    if(box.count(board[(i/3)*3+j/3][( i%3)*3+j%3]))return false;
                    box.insert(board[(i/3)*3+j/3][( i%3)*3+j%3]);
                }
            }
        }
        return true;
    }
};