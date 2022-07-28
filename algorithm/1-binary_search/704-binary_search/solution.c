int search(int* nums, int numsSize, int target){
    /* i - startIndex, j - lastIndex; m - middle */
    int i = 0, j = numsSize - 1, m;
    
    while (i <= j)
    {
        m = (i + j) / 2;
        if (nums[m] == target)
        {
            return (m);
        } else if (nums[m] < target)
        {
            i = m + 1;
        } else if (nums[m] > target) {
           j = m - 1;
        }
    }
    
    return (-1);
}