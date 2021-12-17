/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int size = s.size();
        // int leftIndex = 0, maxSize = 0;
        // unordered_set<int>sets;

        // for(int i=0; i<size; ++i){
        //     while(sets.find(s[i]) != sets.end()){
        //         sets.erase(s[leftIndex]);
        //         leftIndex++;
        //     }
        //     sets.insert(s[i]);
        //     maxSize = max(maxSize, i-leftIndex+1);
        // }
        // return maxSize;
        int maxSize = 0;
        if(s.size() == 0)
            return 0;
        if(s.size() == 1)
            return 1;
        int n = s.size();
        vector<int>count(256, 0);
        int i = 0, j = 0;
        count[s[0]]++;
        while(j != n-1){
            if(count[s[j+1]] == 0){
                j++;
                count[s[j]] = 1;
                maxSize = max(maxSize, j-i+1);
            }
            else{
                count[s[i]]--;
                i++;
            }
        }
        return maxSize;
    }
};
// @lc code=end

