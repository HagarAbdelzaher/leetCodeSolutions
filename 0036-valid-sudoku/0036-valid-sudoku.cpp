class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false};
        bool cols[9][9]={false};
        bool squares[9][9]={false};
        
        for(int i=0 ; i<9 ; i++){
            for(int j=0 ; j<9 ; j++)
            {
                if(board[i][j]=='.')
                    continue;
                
                int index = board[i][j]-'0'-1;
                int area = (i/3)*3+(j/3);
                
                
                if(row[i][index] || cols[j][index] || squares[area][index]){
                    return false;
                }
                row[i][index]=true;
                cols[j][index]=true;
                squares[area][index]=true;
            }
        }
        return true;
    }
        
        
};