/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row(matrix.size(), 1);
        vector<int>col(matrix[0].size(), 1);

        int rowSize = matrix.size(), colSize = matrix[0].size();
        for(int i=0; i<rowSize; ++i){
            for(int j=0; j<colSize; ++j){
                if(matrix[i][j] == 0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        for(int i=0; i<rowSize; ++i){
            for(int j=0; j<colSize; ++j){
                if(row[i] == 0 || col[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
// @lc code=end

