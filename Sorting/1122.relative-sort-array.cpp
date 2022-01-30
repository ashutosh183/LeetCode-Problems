/*
 * @lc app=leetcode id=1122 lang=cpp
 *
 * [1122] Relative Sort Array
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int>mp;
        //vector<int>ans;
        for(int ele : arr1){
            mp[ele]++;
        }
        
        vector<int>ans;
        
        for(int ele : arr2){
            if(mp.find(ele) != mp.end()){
                for(int i=0; i<mp[ele]; ++i){
                    ans.push_back(ele);
                }
                mp[ele] = 0;
            }
        }
        
        for(auto ele : mp){
            if(ele.second > 0){
                for(int i=0; i<ele.second; ++i){
                    ans.push_back(ele.first);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

