void reverseArray(int* nums, int start, int stop ) {
    int i;
    
    while (start < stop)
    {
        i = nums[stop];
        
        nums[stop] = nums[start];
        nums[start] = i;
        start++;
        stop--;
    }
}

void rotate(int* nums, int numsSize, int k){
    
    /* k is k % len */
    k = k % numsSize;
    
    /* reverse whole array */
    reverseArray(nums, 0, numsSize - 1);
    

    /* reverse 0 to k - 1 */
    reverseArray(nums, 0, k - 1);

    /* reverse from k to len - k */
    reverseArray(nums, k, (numsSize - 1));
}