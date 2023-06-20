class Solution {
public:
   vector<vector<int>>ans;
    void generate(int ind, int n,vector<int>&nums, vector<int>&ds, int target){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(target<0)
        return;
        
        for(int i=ind;i<n;i++){
            if(i!=ind && nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            generate(i+1,n,nums,ds, target-nums[i]);
            ds.pop_back();
        }
    }


    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int>ds;
        sort(nums.begin(),nums.end());
        generate(0,nums.size(),nums,ds, target);
        return ans;
    }
};
