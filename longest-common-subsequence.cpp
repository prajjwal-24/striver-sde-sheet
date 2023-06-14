class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1,mxCount=0,lastSmall=INT_MIN;
        for(int i=1;i<nums.size();i++){
           if(nums[i]!=nums[i-1]){
           if(nums[i]==nums[i-1]+1){
               count++;
               lastSmall=nums[i];

           }
           else {
               mxCount=max(mxCount,count);
               count=1;
               lastSmall=nums[i];
           }
           }
        }
        if(nums.size()>0)
        return max(mxCount,count);
        else
        return 0;
    }
};
