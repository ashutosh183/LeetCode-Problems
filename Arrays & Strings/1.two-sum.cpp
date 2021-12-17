/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int>mp;
        vector<int>res;
        for(int i=0; i<size; ++i){
            int numToFind = target-nums[i];

            if(mp.find(numToFind) != mp.end()){
                res.push_back(i);
                res.push_back(mp.find(numToFind)->second);
                return res;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return res;
    }
};
// @lc code=end

