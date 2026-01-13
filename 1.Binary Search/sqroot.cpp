// You are given a positive integer n. Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
#include <iostream>
using namespace std;

int sqroot(int x)
{
    if (x<2) return x;
    int ans = -1;
    int left = 1, right = x/2;
    
    while(left<=right)
    {
        long long mid = left + (right - left)/2;
        
        if(mid*mid <= x)
        {
            ans = mid;
            left = mid+1;
        }
        
        else
        {
            right = mid-1;
        }
    }
    return ans;
}

int main()
{
    cout << sqroot(36);
    return 0;
}
