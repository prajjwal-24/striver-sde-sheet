class Solution {
public:
    vector<vector<string>>ans;
    bool isPossible(int row,int col,vector<string>&board, int n){
        int duprow=row,dupcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q')
            return false;
            row--,col--;
        }

        row=duprow,col=dupcol;
        while(col>=0){
            if(board[row][col]=='Q')
            return false;
            col--;
        }

        row=duprow,col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q')
            return false;
            row++,col--;
        }
        return true;
    }
    void queenPlacement(int col, int n, vector<string>&board){
        if(col==n){
            ans.push_back(board);
            return;
        }
        

        for(int row=0;row<n;row++){
            if(isPossible(row,col,board,n)){
                board[row][col]='Q';
                queenPlacement(col+1,n,board);
                board[row][col]='.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        queenPlacement(0,n,board);
        return ans;
    }
};
