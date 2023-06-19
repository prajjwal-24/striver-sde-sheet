#include <bits/stdc++.h> 
bool comp(vector<int>a,vector<int>b){
    return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),comp);
    // for(auto it:jobs){
    //     cout<<it[0]<<" "<<it[1]<<"\n";
    // }
    // return 1;
    int maxj=-1;
    for(int i=0;i<jobs.size();i++){
        maxj=max(maxj,jobs[i][0]);
    }
    // cout<<maxj<<"\n";
    vector<int>ans(maxj+1,-1);
    int profit=0;
    for(int i=0;i<jobs.size();i++){
        for(int j=jobs[i][0];j>0;j--){
            if(ans[j]==-1){
                ans[j]=i;
                profit+=jobs[i][1];
                break;
            }
        }
    }
    return profit;
}
