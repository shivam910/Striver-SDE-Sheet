// Link:https://leetcode.com/problems/merge-intervals/submissions/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size = intervals.size();
        vector<vector<int>> v;
        if(size==0) return v;
        sort(intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        for(auto it : intervals) {
            if(it[0] <= temp[1]) {
                temp[1] = max( it[1], temp[1] );
            }
            else {
                v.push_back(temp);
                temp=it;
            }
        }
        v.push_back(temp);
        return v;
    }
};
