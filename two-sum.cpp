class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>m;
       vector<int>v;
       for(int i=0;i<nums.size();i++){
           int toFind=target-nums[i];
           if(m.find(toFind)!=m.end()){
               v.push_back(i);
               v.push_back(m[toFind]);
           }
           m[nums[i]]=i;
       }
       return v;
    }
};
