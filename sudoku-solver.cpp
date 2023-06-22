class Solution {
public:
    bool isPossible(char ch, int row, int col,vector<vector<char>>& board ){
        for(int i=0;i<9;i++){
            if(board[i][col]==ch)
            return false;
            if(board[row][i]==ch)
            return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ch)
            return false;
        }
        return true;
    }
    bool sudokuSolver(vector<vector<char>>& board){
        int N=board.size();
        int M=board[0].size();
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){

                if(board[i][j]=='.'){
                    for(char ch='1';ch<='9';ch++){
                        if(isPossible(ch,i,j, board)){
                            board[i][j]=ch;
                            if(sudokuSolver(board))
                            return true;
                            else
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudokuSolver(board);
    }
};
