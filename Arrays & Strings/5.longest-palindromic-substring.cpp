/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string expandCentre(string s, int l, int r){
        int size = s.size();
        while(l >= 0 && r <= size-1 && (s[l] == s[r])){
            l--;
            r++;
        }
        return s.substr(l+1, r-l-1);
    }
    string longestPalindrome(string s) {
        int size = s.size();
        if(size == 0)
            return "";
        string result = s.substr(0, 1);
        for(int i=0; i<size-1; i++){
            string oddString = expandCentre(s, i, i);

            if(oddString.length() > result.length()){
                result = oddString;
            }

            string evenString = expandCentre(s, i, i+1);

            if(evenString.length() > result.length()){
                result = evenString;
            }
        }

        return result;
    }
};
// @lc code=end

