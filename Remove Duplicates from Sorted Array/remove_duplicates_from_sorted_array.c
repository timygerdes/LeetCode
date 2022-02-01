int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 0)
        return 0;
    int counter = 0;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[counter])
        {
            nums[counter + 1] = nums[i];
            counter++;
        }
    }
    return (counter + 1);
}
