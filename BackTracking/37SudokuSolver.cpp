class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        backtrack(board);
    }

    bool backtrack(vector<vector<char>>& board)
    {
        for(int row = 0;row<9;row++)
        {
            for(int col = 0;col<9;col++)
            {
                if(board[row][col] == '.')
                {
                    for(char c = '1' ; c<='9' ; c++)
                    {
                        if(isValid(board,row,col,c))
                        {
                            board[row][col]=c;
                            if(backtrack(board)) return true;
                            board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isValid(vector<vector<char>>& board,int row, int col, int c)
    {
        for(int i=0;i<9;i++)
        {
            if(board[row][i] == c || board[i][col] == c) return false;

            int subrow = 3 * (row/3) + i/3;
            int subcol = 3 * (col/3) + i%3;

            if(board[subrow][subcol] == c) return false;
        }
        return true;
    }
};
