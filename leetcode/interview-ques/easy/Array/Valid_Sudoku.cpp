// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/769/

class Solution {
public:
    bool valid_rows(vector<vector<char>>& board) {
        array<bool,9> v;
        fill(v.begin(),v.end(),false);
        for(auto& r: board) {
            for(auto& c: r) {
                if(c != '.') {
                    if(v[c-'0'-1])    return false;
                    v[c-'0'-1] = true;
                }
            }
            fill(v.begin(),v.end(),false);
        }
        return true;
    }

    bool valid_cols(vector<vector<char>>& board) {
        array<bool,9> v2;
        fill(v2.begin(),v2.end(),false);
        for(auto j=0; j<9; ++j) {
            for(auto i=0; i<9; ++i) {
                if(board[i][j] != '.'){
                   if(v2[board[i][j]-'0'-1])    return false;

                    v2[board[i][j]-'0'-1] = true;
                }
            }
            fill(v2.begin(),v2.end(),false);
        }
        return true;
    }

    bool valid_boxes(vector<vector<char>>& board) {
        array<bool,9> v;
        fill(v.begin(),v.end(),false);
        for(int i=0;i<3;++i) {
            for(int j=0;j<3;++j) {
                for(auto xi = i*3;     xi<(i*3)+3; ++xi) {
                    for(auto yj = j*3; yj<(j*3)+3; ++yj) {
                        if(board[xi][yj] != '.'){
                            if(v[board[xi][yj]-'0'-1])    return false;

                            v[board[xi][yj]-'0'-1] = true;
                        }
                    }
                }
                fill(v.begin(),v.end(),false);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return valid_rows(board) && valid_cols(board) && valid_boxes(board);
    }
};

