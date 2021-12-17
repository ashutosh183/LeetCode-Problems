/*
 * @lc app=leetcode id=917 lang=cpp
 *
 * [917] Reverse Only Letters
 */

// @lc code=start
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0, j=s.size()-1;
        unordered_map<char, int>mp;
        for(int i=33; i<=64; ++i){
            mp[char(i)] = i;
        }
        for(int i=91; i<=96; ++i){
            mp[char(i)] = i;
        }
        while(i <= j){
            if(mp.find(s[i]) != mp.end())
                i++;
            else if(mp.find(s[j]) != mp.end())
                j--;
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }    
        }
        return s;
    }
};
// @lc code=end

