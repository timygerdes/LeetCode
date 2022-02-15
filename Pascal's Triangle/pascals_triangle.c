/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    int **returnArr = malloc(numRows * sizeof(int *));
    *returnColumnSizes = malloc(numRows * sizeof(int));

    *returnSize = numRows;
    for (int i = 0; i < numRows; i++)
    {
        returnArr[i] = malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;
        returnArr[i][0] = 1;
        returnArr[i][i] = 1;
        for (int j = 1; j < i; j++)
            returnArr[i][j] = returnArr[i - 1][j - 1] + returnArr[i - 1][j];
    }
    return (returnArr);
}
