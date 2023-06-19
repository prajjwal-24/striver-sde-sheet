#include <bits/stdc++.h>
void sumOfSubset(vector<int>arr,int i, int n,int sum, vector<int>&v){
    if(i==n){
        v.push_back(sum);
        return;
    }
    sumOfSubset(arr,i+1,n,sum+arr[i],v);
    sumOfSubset(arr,i+1,n,sum,v);
} 
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>v;
    sumOfSubset(num, 0, num.size(), 0, v);
    sort(v.begin(),v.end());
    return v;

}
