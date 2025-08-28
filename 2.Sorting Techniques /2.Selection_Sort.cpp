void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}


void selection_sort(vector <int> &nums)
{
    for(int i=0;i<nums.size()-1;i++)
    {   
        int min_index = i;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j] < nums[min_index]) min_index = j;
        }
        swap(nums[i],nums[min_index]);
    }
}
