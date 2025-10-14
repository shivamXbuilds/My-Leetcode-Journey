class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row = 0;row<9;row++)
        {
            for(int col=0;col<9;col++)
            {
                if(board[row][col]!='.')
                {
                    char c = board[row][col];
                    for(int i=0;i<9;i++)
                    {
                        if(i!=col && board[row][i] == c || i!=row && board[i][col] == c) return false;
                        int subrow = 3*(row/3) + (i/3);
                        int subcol = 3*(col/3) + (i%3);

                        if(subrow!=row && subcol!=col && board[subrow][subcol] == c) return false;
                    }
                }
            }
        }
        
        
        return true;
    }
};
