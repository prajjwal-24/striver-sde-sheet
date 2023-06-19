bool comp(Item a,Item b){
    double a1=(double)a.value/a.weight;
    double b1=(double)b.value/b.weight;
    return a1>b1;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item items[], int n)
    {
        sort(items,items+n,comp);
    // for(auto it:items){
    //     cout<<it.first<<" "<<it.second<<"\n";
    // }
    double ans=0;
    for(int i=0;i<n;i++){
        if(items[i].weight<=w){
            ans+=items[i].value;
            w=w-items[i].weight;
        }
        else{
            ans+=((double)items[i].value)*w/items[i].weight;
            // w=w-(items[i].second)/w;
            break;
        }
    }
    return ans;
    }
