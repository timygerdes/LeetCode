int removeElement(int* nums, int numsSize, int val)
{
    int tmp;
    int k = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
            nums[i] = 51;
        else
            k++;
    }
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }
    return (k);
}
