/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
 */

// @lc code=start
class Solution {
public:
    static bool cmp(vector<int>point1, vector<int>point2){
        int dist1 = point1[0] * point1[0] + point1[1] * point1[1];
        int dist2 = point2[0] * point2[0] + point2[1] * point2[1];
        return dist1 < dist2;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), cmp);
        
        vector<vector<int>>ans;
        
        for(int i=0; i<k; ++i){
            ans.push_back({points[i][0], points[i][1]});
        }
        
        return ans;
        
    }
};
// @lc code=end

