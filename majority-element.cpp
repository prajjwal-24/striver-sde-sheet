class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el,count=0;
        for(auto it:nums){
            if(count==0){
                count=1;
                el=it;
            }
            else if(it==el)count++;
            else count--;
        }
        return el;
    }
};
