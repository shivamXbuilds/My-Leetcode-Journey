class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0, high1 = matrix.size() - 1;
        int high2  = matrix[0].size() - 1;
        for(int i=0;i<=high2;i++)
        {
            while(low<=high1)
            {
                int mid = low + (high1 - low) / 2;
                if(matrix[mid][i] == target) return true;
                else if(matrix[mid][i] > target) high1 = mid - 1;
                else low = mid + 1; 
            }
            low = 0, high1 = matrix.size() - 1;
        }
        return false;   
    }    
};
