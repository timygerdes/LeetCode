#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

char ** findRelativeRanks(int* score, int scoreSize, int* returnSize){
    int arr1[1000000] = {0};
    int arr2[1000000] = {0};
    int count = 1;
    int maxNum = 0;
    int minNum = 1000001;
    char **answer = (char **)malloc(scoreSize * sizeof(char *));

    *returnSize = scoreSize;
    for (int i = 0; i < scoreSize; i++)
        arr1[score[i]] = 1;
    for (int i = 0; i < scoreSize; i++)
    {
        if (minNum > score[i])
            minNum = score[i];
        if (maxNum < score[i])
            maxNum = score[i];
    }
    for (int i = maxNum; i >= minNum; i--)
    {
        if (arr1[i] == 1)
        {
            arr2[i] = count;
            count++;
        }
    }
    for (int i = 0; i < scoreSize; i++)
    {
        if (arr2[score[i]] == 1)
        {
            answer[i] = malloc(strlen("Gold Medal") * sizeof(char));
            answer[i] = "Gold Medal";
        }
        else if (arr2[score[i]] == 2)
        {
            answer[i] = malloc(strlen("Silver Medal") * sizeof(char));
            answer[i] = "Silver Medal";
        }
        else if (arr2[score[i]] == 3)
        {
            answer[i] = malloc(strlen("Bronze Medal") * sizeof(char));
            answer[i] = "Bronze Medal";
        }
        else
        {
            answer[i] = malloc(13 * sizeof(char));
            sprintf(answer[i], "%d", arr2[score[i]]);
        }
    }
    return (answer);
}
