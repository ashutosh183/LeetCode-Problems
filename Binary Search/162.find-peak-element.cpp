/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int helper(vector<int>&nums, int low, int high){
        if(low == high){
            return low;
        }
        int mid = low + high/2;
        if(A[mid] > A[mid+1]){
            return helper(nums, low, mid);
        }
        return helper(nums, mid+1, high);
    }
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        return helper(nums, 0, high);
        
    }
};
// @lc code=end

