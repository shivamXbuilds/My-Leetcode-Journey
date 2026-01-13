//Given two numbers N and M, find the Nth root of M.
#include <iostream>
using namespace std;

int nthroot(int n, int x)
{
    int low = 1, high = x;
    
    while(low<=high)
    {
        long long mid = low + (high - low)/2;
        long long ans = 1;
        
        for(int i=0;i<n;i++)
        {
            ans = ans*mid;
            if(ans>x) break;
        }
        
        if(ans == x) return mid;
        else if(ans > x)
        {
            high = mid -1;
        }
        
        else low = mid+1;
    }
    
    return -1;
}

int main()
{
    cout << nthroot(3,64);
    return 0;
}
