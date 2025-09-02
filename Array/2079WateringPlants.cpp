class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0;
        int water = capacity;
        for(int i = 0;i<plants.size();i++)
        {
            if(water >= plants[i])
            {
                steps ++;
                water = water - plants[i];
            }
            else if(water < plants[i])
            {
                steps = steps + i; // going to fill water;
                steps = steps + i + 1; // going back to water plants;
                water = capacity - plants[i]; // watering 
            }
        }
        return steps;
    }
};
