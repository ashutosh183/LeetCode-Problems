/*
 * @lc app=leetcode id=769 lang=cpp
 *
 * [769] Max Chunks To Make Sorted
 */

// @lc code=start
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int size = arr.size();
        int currMax = arr[0];
        int chunks = 0;
        for(int i=0; i<size; ++i){
            currMax = max(currMax, arr[i]);

            if(currMax == i){
                chunks++;
            }
        }
        return chunks;
    }
};
// @lc code=end

