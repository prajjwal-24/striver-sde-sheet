#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>>v;
    for(int i=0;i<start.size();i++){
        v.push_back({finish[i],start[i]});

    }
    sort(v.begin(),v.end());
    int ans=1;
    int end=v[0].first;
    for(int i=1;i<start.size();i++){
        if(v[i].second>=end){
            ans++;
            end=v[i].first;
        }
    }
    return ans;
}
