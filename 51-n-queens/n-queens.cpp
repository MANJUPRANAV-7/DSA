class Solution {
public:
    bool isSafe(int row , int col , vector<string>& board){
        int r = row-1 ;
        int c = col-1;
        while(r>=0 && c >=0){
            if(board[r][c]=='Q'){
                return 0;
            }
            r--;
            c--;
        }
         r = row-1 ;
         c = col;
        while(r>=0){
            if(board[r][c]=='Q'){
                return 0;
            }
            r--;
        }
         r = row-1 ;
         c = col+1;
        while(r>=0 && c <board.size()){
            if(board[r][c]=='Q'){
                return 0;
            }
            r--;
            c++;
        }
        return true;
    }
    
    void nq(vector<vector<string>>& ans , vector<string>& board , int idx){
        if(idx==board.size()){
            ans.push_back(board);
            return;
        }
        for(int i=0 ; i<board.size() ; i++){
            if(isSafe(idx , i , board)){
                board[idx][i]='Q';
                nq(ans , board , idx+1);
                board[idx][i]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        nq(ans,board,0);
        return ans;
    }
};