class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        set<vector<int>>st;
        for(i=0;i<nums.size()-1;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[j]+nums[k]+nums[i];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    st.insert({nums[i],nums[j],nums[k]});
                    k--;
                    j++;
                }
            }
        }

        vector<vector<int>>ans;
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
