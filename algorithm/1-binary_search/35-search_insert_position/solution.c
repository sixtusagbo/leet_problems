int searchInsert(int* nums, int numsSize, int target){
    /* l - left, m - middle, r - right */
    int l = 0, m,  r = numsSize - 1;
    
    while (l <= r)
    {
        m = l + ((r - l) / 2);
        
        if (nums[m] == target)
            return (m);
        else if (nums[m] < target)
            l = m + 1;
        else if (nums[m] > target)
            r = m - 1;
    }
    
    return (l);
}