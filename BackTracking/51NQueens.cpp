class Solution {
public:
    vector<vector<string>>result; // stores config answer
    vector<string>board; // stroes current board
    unordered_set<int>cols;
    unordered_set<int>diag1; // row - col
    unordered_set<int>diag2; // row + col

    void backtrack(int row, int n)
    {
        if(row == n) 
        {
            result.push_back(board);
            return;
        }

        for(int col = 0;col<n;col++)
        {
            if(cols.count(col) || diag1.count(row - col) || diag2.count(row + col))
            {
                continue;
            }
            // now we are going to place queens
            board[row][col] = 'Q';
            cols.insert(col);
            diag1.insert(row - col);
            diag2.insert(row + col);

            backtrack(row + 1, n);
            
            //Erase
            board[row][col] = '.';
            cols.erase(col);
            diag1.erase(row - col);
            diag2.erase(row + col);
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        board = vector<string>(n , string(n,'.')); // create board of size n and each sqr is '.'
        backtrack(0,n);
        return result;
    }
};
