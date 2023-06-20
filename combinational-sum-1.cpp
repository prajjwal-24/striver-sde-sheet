class Solution {
public:
    vector<vector<int>>ans;
    void subsetGenerate(int target, vector<int>&ds,vector<int>&nums,int i,int n){
       if(i==n){
           if(target==0){
               ans.push_back(ds);
           }
           return;
       }

       if(nums[i]<=target){
           ds.push_back(nums[i]);
           subsetGenerate(target-nums[i],ds,nums,i, n);
           ds.pop_back();
       }
        subsetGenerate(target,ds,nums,i+1,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        subsetGenerate(target,ds,candidates,0,candidates.size());
        return ans;
    }
};
