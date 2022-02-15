/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize)
{
    *returnSize = n;
    char **answer = malloc(n * sizeof(char *));
    int j;

    for (int i = 0; i < n; i++)
    {
        answer[i] = malloc(9 * sizeof(char));
        j = i + 1;
        if (j % 3 == 0 && j % 5 == 0)
            answer[i] = "FizzBuzz";
        else if (j % 3 == 0)
            answer[i] = "Fizz";
        else if (j % 5 == 0)
            answer[i] = "Buzz";
        else
            sprintf(answer[i], "%i", j);
    }
    return (answer);
}
