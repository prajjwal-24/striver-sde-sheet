class Solution {
public:
    vector<vector<int>>ans;
    void generate(int ind, int n,vector<int>&nums, vector<int>&ds){
        ans.push_back(ds);
        for(int i=ind;i<n;i++){
            if(i!=ind && nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            generate(i+1,n,nums,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        sort(nums.begin(),nums.end());
        generate(0,nums.size(),nums,ds);
        return ans;
    }
};
