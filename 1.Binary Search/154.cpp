class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = nums[0];
        while(low<=high)
        {
            int mid = low + (high - low) / 2;
            if(nums[low] < nums[high])
            {
                ans = min(ans, nums[low]);
                break;
            }
            if(nums[low] == nums[mid] && nums[mid] == nums[high])
            {
                ans = min(ans,nums[low]);
                low++;
                high--;
            }
            else if(nums[mid] >= nums[low])
            {
                ans = min(nums[low], ans);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
                ans = min(nums[mid], ans);
            }
        }
        return ans;
    }
};
