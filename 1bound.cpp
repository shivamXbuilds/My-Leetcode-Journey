#include <vector>
#include<iostream>
using namespace std;

int lowerBound(vector<int> &nums, int x)
{
    int ans = 0;
    int low=0, high = nums.size() - 1;
    while(low<=high)
    {
        int mid = low + (high - low) / 2;
        if(x <= nums[mid])
        {
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    } 
    return ans;
}

int upperBound(vector<int> &nums, int x)
{
    int ans = nums.size();
    int low = 0, high = nums.size() - 1;
    while(low<=high)
    {
        int mid = low + (high - low) / 2;
        if(x < nums[mid])
        {
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    }
    return ans;
}
int main()
{
    vector<int> nums = {1,3,6,7,9};
    cout << lowerBound(nums, 6)<<endl;
    cout << upperBound(nums, 6);
    return 0;
}
