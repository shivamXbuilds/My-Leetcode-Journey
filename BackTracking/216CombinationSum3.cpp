class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>given;
        for(int i = 1;i<=9;i++)
        {
            given.push_back(i);
        }
        vector<int>current;
        backtrack(given,n,0,current,k);
        return result;
    }

    void backtrack(vector<int>&given, int target, int start, vector<int>&current, int size)
    {
        if(target == 0 && current.size() == size )
        {
            result.push_back(current);
            return;
        }

        if(target<0) return;

        for(int i=start;i<given.size();i++)
        {
            if(i>start && given[i] == given[i-1]) continue;

            current.push_back(given[i]);
            backtrack(given,target - given[i], i+1, current, size);

            current.pop_back();
        }
    }
};
