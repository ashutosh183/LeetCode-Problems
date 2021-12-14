/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
 */

// @lc code=start
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
          if(k <= 1)
            return 0;
        int count = 0;
        int ans = 0, product = 1;
        int left = 0;
        for(int i=0; i<nums.size(); ++i){
            product *= nums[i];
            while(product >= k){
                  product = product/nums[left];
                  left++;
            }
            ans += (i-left+1);
        }
        return ans;
    }
};
// @lc code=end

