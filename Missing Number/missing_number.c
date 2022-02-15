int missingNumber(int* nums, int numsSize){

    int isNotMissing = 0;
    int nbrToCheck = numsSize;
    int returnNbr = 0;

    while (nbrToCheck >= 0)
    {
        for (int i = 0; i < numsSize; i++)
            if (nums[i] == nbrToCheck)
                isNotMissing = 1;
        if (isNotMissing == 0)
        {
            returnNbr = nbrToCheck;
            return (returnNbr);
        }
        isNotMissing = 0;
        nbrToCheck--;
    }
    return (returnNbr);
}
