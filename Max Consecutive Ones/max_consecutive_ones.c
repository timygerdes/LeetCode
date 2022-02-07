int findMaxConsecutiveOnes(int* nums, int numsSize){

    int counter = 0, maxOnes = 0;

    for (int i = 0; i < numsSize; i++)
    {
        while (i < numsSize && nums[i] == 1)
        {
            counter++;
            i++;
        }
        if (counter > maxOnes)
            maxOnes = counter;
        counter = 0;
    }
    return (maxOnes);
}
