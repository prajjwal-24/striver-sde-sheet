int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int>m;
    int sum=0;
    int maxLength=0;
    
    for(int i=0;i<n;i++){
        
        sum+=A[i];
    
      if(sum==0){ // sum==k
          maxLength=i+1;
      }
        
        if(m.find(sum)!=m.end()){ // sum-k
            maxLength=max(maxLength, i-m[sum]);
        }
        else
        m[sum]=i;
    }
    return maxLength;
}
