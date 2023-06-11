class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=-INT_MAX,sum=0;
        if(nums.size()==1)
        return nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxSum)
            maxSum=sum;
            if(sum<0){
                sum=0;
            }
            
        }

        return maxSum;
    }
};
