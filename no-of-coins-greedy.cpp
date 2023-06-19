#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int>coins={1,2,5,10,20,50,100,500,1000};
    // sort(coins.begin(),coins.end());
    int count=0;
    int sz=coins.size()-1;
    while(amount && sz>=0){
       if(amount<coins[sz])
       {
           sz--;
           continue;
       }
        amount=amount-coins[sz];
        count++;
    }
    return count;
}
