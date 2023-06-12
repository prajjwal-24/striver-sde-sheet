class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        int n=intervals.size();
        if(n==1)
        return intervals;
        sort(intervals.begin(),intervals.end());
        int startpt=intervals[0][0];
        int endpt= intervals[0][1];
            
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=startpt and intervals[i][0]<=endpt){
                endpt =max(intervals[i][1],endpt);
                // if(endpt==intervals[i][1])
                // v.push_back({startpt,endpt});
            }
            
            else {
                v.push_back({startpt,endpt});
                startpt=intervals[i][0];
                endpt=intervals[i][1];
            }
            
            // v.push_back({startpt,endpt});
            
        }
        v.push_back({startpt,endpt});
        return v;
    }
};
