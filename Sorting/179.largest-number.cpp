/*
 * @lc app=leetcode id=179 lang=cpp
 *
 * [179] Largest Number
 */

// @lc code=start
class Solution {
public:
    static bool cmp(string x, string y){
        if(x.append(y) > y.append(x)){
            return true;
        }
        return false;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>a;
        for(int i=0; i<nums.size(); ++i){
            a.push_back(to_string(nums[i]));
        }
        
        sort(a.begin(), a.end(), cmp);
        string result = "";
        if(a[0] == "0"){
            return "0";
        }
        for(auto ch : a){
            result += ch;
        }
        return result;
        
    }
};
// @lc code=end

