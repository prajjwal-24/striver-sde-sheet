class Solution {
public:
    vector<vector<int>>ans;
    void permutations(vector<int>&nums,int ind ,int n){
        if(ind==n){
            ans.push_back(nums);
            return;
        }
        
        for(int i=ind;i<n;i++){
            swap(nums[i], nums[ind]);
            permutations(nums,ind+1,n);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permutations(nums,0,nums.size());
        return ans;
    }
};
