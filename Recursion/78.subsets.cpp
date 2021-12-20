/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    // void helper(vector<int>&nums, int idx, int sz, vector<vector<int>>&ans, int tmp[], int size){
    //     if(idx == size){
    //         vector<int>arr;
    //         for(int i=0; i<sz; ++i){
    //             arr.push_back(tmp[i]);
    //         }
    //         ans.push_back(arr);
    //         return;
    //     }
    //     tmp[sz]=nums[idx];
    //     helper(nums, idx+1, sz+1, ans, tmp, size);
    //     helper(nums, idx+1, sz, ans, tmp, size);
    // }
    // vector<vector<int>> subsets(vector<int>& nums) {
    //     vector<vector<int>>ans;
    //     int tmp[nums.size()];
    //     int size = nums.size();
    //     helper(nums, 0, 0, ans, tmp, size);
    //     return ans;
    // }
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

