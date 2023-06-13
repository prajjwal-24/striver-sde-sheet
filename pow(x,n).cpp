class Solution {
public:
    double myPow(double x, int n) {
        long long nn=n;
        nn=abs(nn);
        double ans=1l;
        while(nn!=0){
            if(nn%2==0){
                x=x*x;
                nn=nn/2;
            }
            else{
                ans*=x;
                nn=nn-1;
            }
        }
        if(n<0)return 1/ans;
        else return ans;
    }
};
