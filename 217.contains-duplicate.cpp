/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int size = nums.size();
        // unordered_map<int, int>mp;
        // for(int i=0; i<size; ++i){
        //     mp[nums[i]]++;   
        // }
        // for(auto it:mp){
        //     if(it.second >= 2){
        //         return true;
        //     }
        // }
        // return false;
        //ONE LINE SOLUTION.
        return set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};
// @lc code=end

