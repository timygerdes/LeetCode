int singleNumber(int* nums, int numsSize){

    int isDup = 0;

    for (int i = 0; i < numsSize; i++)
    {
        int j = 0;
        while (j < numsSize && isDup == 0)
        {
            if (nums[i] == nums[j] && i != j)
                isDup = 1;
            j++;
        }
        if (isDup == 0)
            return (nums[i]);
        isDup = 0;
    }
    return (0);
}
