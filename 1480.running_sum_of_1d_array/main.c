/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *arr = malloc(sizeof *arr * numsSize);
    arr[0] = nums[0];
    for(int i = 1; i < numsSize; i++)
        arr[i] = nums[i] + arr[i-1];
    return arr;
}