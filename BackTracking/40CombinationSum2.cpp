class Solution {
public:
    vector<vector<int>>result;

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<int>current;
    backtrack(candidates , target, 0, current);
    return result;
    }

    void backtrack(vector<int>& nums, int target, int start, vector<int>& current)
    {
        if(target == 0)
        {
            result.push_back(current);
            return;
        }

        if(target < 0) return;

        for(int i = start;i<nums.size();i++)
        {
            if(i>start && nums[i] == nums[i - 1]) continue;

            current.push_back(nums[i]);
            backtrack(nums,target - nums[i], i+1,current);

            current.pop_back();
        }
    }
};
