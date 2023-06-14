int Solution::solve(vector<int> &A, int k) {
    unordered_map<int,int>m;
    int xr=0,count=0;
    // x= xr^k;
    m[xr]++;
    for(int i=0;i<A.size();i++){
        xr=xr^A[i];
        count+=m[xr^k];
        m[xr]++;
    }
    return count;
}
