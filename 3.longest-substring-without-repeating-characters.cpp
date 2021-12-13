/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        int leftIndex = 0, maxSize = 0;
        unordered_set<int>sets;

        for(int i=0; i<size; ++i){
            while(sets.find(s[i]) != sets.end()){
                sets.erase(s[leftIndex]);
                leftIndex++;
            }
            sets.insert(s[i]);
            maxSize = max(maxSize, i-leftIndex+1);
        }
        return maxSize;
    }
};
// @lc code=end

