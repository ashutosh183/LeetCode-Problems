/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int num = nums.size();
        int noOfSubsets = pow(2, num);
        int i = 0;
        vector<vector<int>>ans;
        while(i < noOfSubsets){
            vector<int>tmp;
            for(int j=0; j<num; ++j){
                if(i & (1 << j))
                    tmp.push_back(nums[j]);
            }
            ans.push_back(tmp);
            i++;
        }
        return ans;
        
    }
};
// @lc code=end

