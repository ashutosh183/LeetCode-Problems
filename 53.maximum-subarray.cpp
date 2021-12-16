/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int currentSum = 0, maximumSum = nums[0];

        for(int i=0; i<size; ++i){
            currentSum += nums[i];
            maximumSum = max(currentSum, maximumSum);
            if(currentSum < 0)
                currentSum = 0;
        }
        return maximumSum;
    }
};
// @lc code=end

