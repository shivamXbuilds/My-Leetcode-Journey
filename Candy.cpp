class Solution {
public:
    int candy(vector<int>& ratings) {
        int number = ratings.size();
        vector<int>candy(number,1);
        for (int i = 1; i < number; i++) 
        {
            if (ratings[i] > ratings[i - 1]) 
            {
                candy[i] = candy[i - 1] + 1;
            }
        }
        for (int i = number - 2; i >= 0; i--) 
        {
            if (ratings[i] > ratings[i + 1]) 
            {
                candy[i] = max(candy[i], candy[i + 1] + 1);
            }
        }

        int total = 0;
        for(int can: candy) total=total+can;
        
        return total;
    }
};
