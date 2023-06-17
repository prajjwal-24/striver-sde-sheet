class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0,maxLen=0;
        for(auto it:nums){
            if(it==1)
            len++;
            else
            len=0;
            maxLen=max(maxLen,len);
        }
        return maxLen;
    }
};
