int checkVerticalForDuplicates(char **columns, int row)
{
    int digitArr[9] = {0};

    for (int i = 0; i < 9; i++)
    {
        if (columns[i][row] != '.')
        {
            digitArr[columns[i][row] - 49] += 1;
            if (digitArr[columns[i][row] - 49] > 1)
                return(0);
        }
    }
    return (1);
}

int checkHorizontalForDuplicates(char *row)
{
    int digitArr[9] = {0};

    for (int i = 0; i < 9; i++)
    {
        if (row[i] != '.')
        {
            digitArr[row[i] - 49] += 1;
            if (digitArr[row[i] - 49] > 1)
                return (0);
        }
    }
    return (1);
}

int checkBoxesForDuplicates(char **columns, int row, int column)
{
    int digitArr[9] = {0};
    int size1 = column + 3;
    int size2 = row + 3;

    for (int i = column; i < size1; i++)
    {
        for (int j = row; j < size2; j++)
        {
            if (columns[i][j] != '.')
            {
                digitArr[columns[i][j] - 49] += 1;
                if (digitArr[columns[i][j] - 49] > 1)
                    return (0);
            }
        }
    }
    return (1);
}

bool isValidSudoku(char** board, int boardSize, int* boardColSize)
{
    bool isValid;
    int columns = 0;
    int rows = 0;

    for (int i = 0; i < 9; i++)
    {
        if (checkHorizontalForDuplicates(board[i]) == 1)
            isValid = true;
        else
            return (false);
    }
    for (int i = 0; i < 9; i++)
    {
        if (checkVerticalForDuplicates(board, i) == 1)
            isValid = true;
        else
            return (false);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (checkBoxesForDuplicates(board, rows, columns) == 1)
                isValid = true;
            else
                return (false);
            rows += 3;
        }
        rows = 0;
        columns += 3;
    }
    return (isValid);
}
