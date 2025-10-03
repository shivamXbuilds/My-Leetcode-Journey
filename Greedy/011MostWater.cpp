class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size() - 1;
        int maxarea = 0;

        while(low<high)
        {
            int h = min(height[low],height[high]);
            int w = high - low;
            maxarea = max(maxarea, w*h);

            if(height[low] < height[high]) low++;
            else high --;
        }
        return maxarea;
    }
};
