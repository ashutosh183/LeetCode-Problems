/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        // //USING HASHING => O(N) extra space
        // unordered_map<int, int>mp;
        // for(int i=0; i<size; ++i){
        //     mp[nums[i]]++;
        // }

        // for(auto it:mp){
        //     if(it.second > size/2)
        //         return it.first;
        // }

        //USING BOYER MOORE VOTING ALGORITHM
        int majEle = -1;
        int count = 0;
        for(int i=0; i<size; ++i){
            if(count == 0){
                majEle = nums[i];
            }
            if(nums[i] == majEle){
                count++;
            }
            else{
                count--;
            }
        }
        return majEle; //WE ARE NOT CHECKING IF THAT ELEMENT IS MAJORITY OR NOT AS WE ARE MENTIONED IN THE QUESTION THAT MAJORITY ELEMENT EXISTS IN THE ARRAY.
    }
};
// @lc code=end

