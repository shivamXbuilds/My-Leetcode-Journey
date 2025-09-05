class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int low = 0, high = n-1;
        while(low<=high)
        {
            if(nums[low] == val)
            {
                nums.erase(nums.begin() + low);
                high-- ;
            }
            else if(nums[high] == val)
            {
                nums.erase(nums.begin() + high);
                high--; // to shrink
            }
            else
            {
                low ++;
                high --; // to shrink 
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};
