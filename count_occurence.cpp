class Solution {
public:
    int countOccurrences(const vector<int>& nums, int x) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int lb = n, ub = n; // for not-found case
        while(low<=high)
        {
            int mid = low + (high - low) / 2;
            if(x<=nums[mid])
            {
                high = mid - 1;
                lb = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        low = 0, high = n-1;

        while(low<=high)
        {
            int mid = low +(high - low) / 2;
            if(x<nums[mid])
            {
                high = mid - 1;
                ub = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ub-lb;
    }
};
