class Solution {
public:
    vector<int> sumZero(int n) {
        // n is size of output vector
        vector<int> result;
        int num = n;
        int count = 0;
        if(n%2==0)
        {
            while(count!=n)
            {
                result.push_back(num);
                count++;
                result.push_back(num*-1);
                count++;
                num = num - 1;
            }
        }
        else
        {
            result.push_back(0);
            while(count!= n - 1)
            {
                result.push_back(num);
                count++;
                result.push_back(num*-1);
                count++;
                num = num - 1;
            }
        }
        return result;
    }
};
