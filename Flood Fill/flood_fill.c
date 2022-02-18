/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void fill(int **image, int rowSize, int *columnSize, int rowStart, int columnStart, int currColor, int newColor)
{
    if (rowStart < 0 || rowStart >= rowSize || columnStart < 0 || columnStart >= columnSize[0] || \
        image[rowStart][columnStart] == newColor || image[rowStart][columnStart] != currColor)
        return ;
    image[rowStart][columnStart] = newColor;
    fill(image, rowSize, columnSize, rowStart - 1, columnStart, currColor, newColor);
    fill(image, rowSize, columnSize, rowStart + 1, columnStart, currColor, newColor);
    fill(image, rowSize, columnSize, rowStart, columnStart - 1, currColor, newColor);
    fill(image, rowSize, columnSize, rowStart, columnStart + 1, currColor, newColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int newColor, int* returnSize, int** returnColumnSizes)
{
    fill(image, imageSize, imageColSize, sr, sc, image[sr][sc], newColor);
    *returnSize = imageSize;
    *returnColumnSizes = malloc(imageSize * sizeof(int));
    for (int i = 0; i < imageSize; i++)
        (*returnColumnSizes)[i] = imageColSize[i];
    return (image);
}
