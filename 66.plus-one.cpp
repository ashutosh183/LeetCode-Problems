/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int sum = 0, carry = 0;
        int size = digits.size();
        sum = digits[size-1] + 1;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        for(int i=size-2; i>= 0; --i){
            sum = (digits[i] + carry);
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
        }

        if(carry > 0){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

