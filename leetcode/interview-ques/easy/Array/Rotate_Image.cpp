// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/770

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // swap rows up down
        for(auto i=0; i<n/2; ++i) {
            swap(matrix[i], matrix[n-1-i]);
        }

        // swap symmetry left right
        for(auto i=0; i<n; ++i) {
            for(auto j=i+1; j<n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
    }
};
