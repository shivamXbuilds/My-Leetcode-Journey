class Solution {
public:
    vector<vector<int>>result;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,0,current);
        return result;
    }

    void backtrack(vector<int>& nums, int target, int start, vector<int>& current)
    {
        if(target == 0)
        {
            result.push_back(current);
            return;
        }

        if(target<0) return;

        for(int i = start;i<nums.size();i++)
        {
            current.push_back(nums[i]);

            backtrack(nums, target - nums[i], i ,current);

            current.pop_back();
        }
    }
};
