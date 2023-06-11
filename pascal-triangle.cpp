class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v{{1}};
        if(numRows==1)
        return v;
        vector<int>v1={1,1};          // n-1Cr-1 = vo element jo nth row aur rth column mein hona chahiye 
        v.push_back(v1);              // try to do it that way also
        if ( numRows ==2)
        return v;
        int count=0;
        while(count<=numRows-3){
            vector<int>v2=v[v.size()-1];
            vector<int>v3;
            v3.push_back(1);
            int i=0;
            while(i!=v2.size()-1){
                int sum=0;
                sum=v2[i]+v2[i+1];
                v3.push_back(sum);
                i++;
            }
            v3.push_back(1);
            v.push_back(v3);
            
            count++;
        }
        return v;
    }
};
