class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=m-1,r=0;
        while(l>=0 && r<nums2.size()){
            if(nums1[l]>nums2[r]){
                swap(nums1[l],nums2[r]);
                l--,r++;
            }
            else
            break;
        }
        for(auto it:nums1)
        cout<<it<<" ";
        for(int i=m;i<m+n;i++){
            swap(nums1[i],nums2[i-m]);
        }
        for(auto it:nums1)
        cout<<it<<" ";
        sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
    }
};
