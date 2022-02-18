int checkIsland(int **grid, int rowSize, int *colSize, int posY, int posX)
{
    if (posY < 0 || posY >= rowSize || posX < 0 || posX >= colSize[0] || grid[posY][posX] == 0)
        return (0);
    grid[posY][posX] = 0;
    int counter = 1;
    counter += checkIsland(grid, rowSize, colSize, posY + 1, posX);
    counter += checkIsland(grid, rowSize, colSize, posY - 1, posX);
    counter += checkIsland(grid, rowSize, colSize, posY, posX + 1);
    counter += checkIsland(grid, rowSize, colSize, posY, posX - 1);
    return (counter);
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize)
{
    int biggestIslandSize = 0;
    int counter;

    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < (*gridColSize); j++)
        {
            counter = checkIsland(grid, gridSize, gridColSize, i, j);
            if (counter > biggestIslandSize)
                biggestIslandSize = counter;
        }
    }
    return (biggestIslandSize);
}
