class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0) return 0;
        int low = 0, high = n-1;
        int leftmax = 0, rightmax = 0;
        int water = 0;
        while(low < high)
        {
            if(height[low] < height[high])
            {
                if(height[low] >= leftmax)
                {
                    leftmax = height[low];
                }
                else
                {
                    water = water + (leftmax - height[low]);
                }
                low ++;
            }
            else
            {
                if(height[high] >= rightmax) rightmax = height[high];
                else water = water + (rightmax - height[high]);
                high--;
            }
        }

        return water;
    }
};
