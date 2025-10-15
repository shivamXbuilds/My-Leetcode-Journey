class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0],nums[1]);
        if(nums.size() == 3) return *max_element(nums.begin(),nums.end());

        int money1 = rob(nums,0,nums.size()-2);
        int money2 = rob(nums,1,nums.size()-1);

        return max(money1,money2);
    }

    int rob(vector<int>& nums, int low, int high)
    {
        int a=0,b=0;
        for(int i=low;i<=high;i++)
        {
            int current = max(a,b+nums[i]);
            b = a;
            a = current;
        }

        return a;
    }
};
