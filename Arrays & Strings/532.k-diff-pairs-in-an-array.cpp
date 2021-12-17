/*
 * @lc app=leetcode id=532 lang=cpp
 *
 * [532] K-diff Pairs in an Array
 */

// @lc code=start
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int size = nums.size(), ans = 0;
        for(int i=0; i<size; ++i){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            int target = it.first - k;
            if(k == 0){
                if(it.second > 1)
                    ans++;
            }
            else if(mp.find(target) != mp.end()){
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

