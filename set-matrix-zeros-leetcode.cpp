class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n = matrix[0].size();
        vector<pair<int,int>>v1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    v1.push_back({i,j});
                }
            }
        }

        for(auto it:v1){
            for(int i=0;i<m;i++){
                matrix[i][it.second]=0;
            }
            for(int j=0;j<n;j++){
                matrix[it.first][j]=0;
            }
        }
    }
};
