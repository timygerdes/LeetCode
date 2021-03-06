/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int total = 0;
    int *arr = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            total = nums[i] + nums[j];
            if (total == target)
            {
                arr[0] = i;
                arr[1] = j;
            }
        }
    }
    *returnSize = 2;
    return (arr);
}
