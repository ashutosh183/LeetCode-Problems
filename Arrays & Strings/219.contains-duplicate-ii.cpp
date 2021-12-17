/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>hashMap;
        int size = nums.size();
        for(int i=0; i<size; ++i){
            if(hashMap.find(nums[i]) != hashMap.end() && i-hashMap[nums[i]] <= k){               
                return true;
            }
            hashMap[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end

