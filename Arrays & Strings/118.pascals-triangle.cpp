/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1){
            return {{1}};
        }
        vector<vector<int>>ans = {{1}};

        for(int i=1; i<numRows; ++i){
            vector<int>temp={1};
            for(int j=1; j<i; ++j){
                temp.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end

