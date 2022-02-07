int findNumbers(int* nums, int numsSize){

    int isEven[numsSize], returnCounter = 0, counter = 0;

    for (int i = 0; i < numsSize; i++)
    {
        counter = floor(log10(abs(nums[i]))) + 1;
        if ((counter % 2) == 0)
            isEven[i] = 1;
        else
            isEven[i] = 0;
        counter = 0;
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (isEven[i] == 1)
            returnCounter++;
    }
    return (returnCounter);
}
