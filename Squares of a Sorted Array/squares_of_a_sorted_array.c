/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){

    int *returnArr = malloc(numsSize * sizeof(int));
    int tmp;

    *returnSize = numsSize;
    for (int i = 0; i < numsSize; i++)
        returnArr[i] = nums[i] * nums[i];
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (returnArr[i] > returnArr[j])
            {
                tmp = returnArr[i];
                returnArr[i] = returnArr[j];
                returnArr[j] = tmp;
            }
        }
    }
    return (returnArr);
}
