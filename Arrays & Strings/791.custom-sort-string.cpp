/*
 * @lc app=leetcode id=791 lang=cpp
 *
 * [791] Custom Sort String
 */

// @lc code=start
class Solution {
public:
    static bool cmp(pair<char, int>p1, pair<char, int>p2){
        return p1.second < p2.second; //if rank is lesser return true
    }
    string customSortString(string order, string s) {
        int rank[26];
        for(int i=0; i<26; ++i){
            rank[i] = INT_MAX;
        }
        for(int i=0; i<order.size(); ++i){
            rank[order[i] - 'a'] = i; //calculate rank
        }
        vector<pair<char, int>>p;
        for(int i=0; i<s.size(); ++i){
            p.push_back({s[i], rank[s[i]-'a']}); //put char and rank according to it
        }
        sort(p.begin(), p.end(), cmp); //custom sorting
        s.clear();
        for(auto ele:p){
            s += ele.first;
        }
        return s;
        
    }
};
// @lc code=end

