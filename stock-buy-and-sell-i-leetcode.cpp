class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int small=prices[0], mxProfit=INT_MIN;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<small){
                small=prices[i];
                // bp=i;
            }
            int profit=prices[i]-small;
            if(profit>mxProfit)
            mxProfit=profit;

        }
      // sabse pehle us array m sabse chota element nikal lo 
      // aur uske aage k bache hue sare elements m se sabse bade se subtract kr do
        
        return mxProfit>0?mxProfit:0;
    }
};
