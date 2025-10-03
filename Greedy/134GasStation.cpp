class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int Sumcost = 0;
        int Sumgas = 0;
        int Fuel = 0;
        int index = 0;

        for(int i=0;i<gas.size();i++)
        {
            Sumcost = Sumcost + cost[i];
            Sumgas = Sumgas + gas[i];

            Fuel = Fuel + (gas[i] - cost[i]);

            if(Fuel < 0)
            {
                Fuel = 0;
                index = i+1;
            }
        }

        if(Sumcost > Sumgas) return -1;

        return index;
    }
};
