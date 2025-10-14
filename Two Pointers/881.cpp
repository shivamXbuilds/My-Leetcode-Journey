class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int low=0,high=people.size()-1,count=0;

        while(low<=high)
        {
            if(people[low] + people[high] <= limit) low++;
            high--;
            count++;
        }

        return count;
    }
};
