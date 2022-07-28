/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int i = 0, j = numsSize - 1, si, sj, in = numsSize - 1, *numsOut;
    *returnSize = numsSize;
    
    numsOut = malloc(sizeof(int) * numsSize);
    
    while (i <= j)
    {
        si = nums[i] * nums[i];
        sj = nums[j] * nums[j];
        
        if (si > sj)
        {
            numsOut[in--] = si;
            i++;
        }
        else
        {
            numsOut[in--] = sj;
            j--;
        }
    }
    
    
    return (numsOut);
}