/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    int row, column, counter;

    if (matSize * (*matColSize) != r * c)
    {
        *returnColumnSizes = matColSize;
        *returnSize = matSize;
        return (mat);
    }

    int **returnArr = malloc(r * sizeof(int *));
    *returnColumnSizes = malloc(r * sizeof(int));
    *returnSize = r;

    counter = 0;
    for (int i = 0; i < r; i++)
    {
        returnArr[i] = malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
        for (int j = 0; j < c; j++)
        {
            row = counter / (*matColSize);
            column = counter % (*matColSize);
            returnArr[i][j] = mat[row][column];
            counter++;
        }
    }
    return (returnArr);
}
