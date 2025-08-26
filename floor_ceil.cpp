class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int floor = -1, ceil = -1;
    while(low<=high)
    {
        int mid = low + (high - low) / 2;
        if(nums[mid] == x)
        {
            ceil = nums[mid];
            floor = nums[mid];
            return {floor,ceil};
        }
        else if(x > nums[mid])
        {
            low = mid+1;
            floor = nums[mid];
        }
        else
        {
            high = mid - 1;
            ceil = nums[mid];
        }
    }
    return {floor,ceil};
    }
};
