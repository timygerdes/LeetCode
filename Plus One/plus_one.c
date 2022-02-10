/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){

    int *returnArr = malloc(digitsSize * sizeof(int));
    int isNine = 0, addOne = 1;

    if (digits[digitsSize - 1] == 9)
        isNine = 1;
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] != 9)
            isNine = 0;
        if (isNine == 1)
            returnArr[i] = 0;
        else
        {
            returnArr[i] = digits[i] + addOne;
            addOne = 0;
        }
    }
    if (isNine == 1)
    {
        *returnSize = digitsSize + 1;
        returnArr = realloc(returnArr, (*returnSize) * sizeof(int));
        returnArr[0] = 1;
        returnArr[digitsSize] = 0;
    }
    else
        *returnSize = digitsSize;
    return (returnArr);
}
