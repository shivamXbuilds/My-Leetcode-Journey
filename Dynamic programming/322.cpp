class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int count = 1e9;

        vector<int>DP(amount + 1, count);

        DP[0] = 0;

        for(int i=1;i<=amount;i++)
        {
            for(int coin : coins)
            {
                if(i - coin >= 0)
                {
                    DP[i] = min(DP[i-coin] + 1, DP[i]);
                }
            }
        }

        if(DP[amount] >= count) return -1;
        return DP[amount];

    }
};
