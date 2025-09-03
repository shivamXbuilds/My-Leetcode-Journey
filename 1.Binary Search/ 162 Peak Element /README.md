So basically we can solve it using linear seach and also *max_element but this don't teach us anything
So we are going to use Binary Search for this question

------------

We know that peak element comes after couple of small elements, so we can assume that space to be sorted and can apply binary search
Minimum size of this space will be 2, that is [ nums[index_peak], nums[index_peak - 1] ] 

let low = 0 and high = nums.size() - 1
int mid = low + high / 2
if(nums[mid] < nums[mid+1]) low = mid + 1
else high = mid - 1


note that while loop wont be having equality, becuase it leads to infinite loop

and we be returing the value of high or low , both are same at the end
