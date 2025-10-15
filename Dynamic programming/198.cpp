class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        vector<int>Dp(nums.size(), -1);
        Dp[0] = nums[0];
        Dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            Dp[i] = max(Dp[i-1], nums[i] + Dp[i-2]);
        }

        return Dp[nums.size() - 1];
    }
};
