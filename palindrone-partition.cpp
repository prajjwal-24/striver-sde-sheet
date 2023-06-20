class Solution {
public:
    vector<vector<string>>ans;
    bool isPalin(string s){
        string str=s;
        reverse(s.begin(),s.end());
        if(str==s)
        return true;
        return false;
    }
    void palindronePart(int ind, string &s, vector<string>&v){
        if(ind==s.size()){
            ans.push_back(v);
            return;
        }
        
        for(int i=ind;i<s.size();i++){
            if(isPalin(s.substr(ind,i-ind+1))){
                v.push_back(s.substr(ind,i-ind+1));
                palindronePart(i+1,s,v);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>v;
        palindronePart(0,s,v);
        return ans;
    }
};
