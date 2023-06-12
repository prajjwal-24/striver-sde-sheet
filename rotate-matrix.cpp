class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // 2,0 => 0,1          
        // 2,1 -> 0,1
        // 2,2 -> 0,2

        // 1,0 -> 0,1
        // rows ko banao col and col ko rows
        // then reverse the row
        // 2,0 -> 0,2
        // 2,1 -> 1,2

        int n= matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        // reverse(matrix.begin(),matrix.end());
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
    }
};
