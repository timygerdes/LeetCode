int lengthOfLongestSubstring(char * s)
{
    int maxSub = 0;
    int tmpMaxSub = 0;
    int startIndex = 0;
    int endIndex = strlen(s) - 1;
    int i = 0;

    if (strlen(s) == 1)
        return (1);
    while (startIndex < endIndex)
    {
        int hashArr[128] = {0};
        i = startIndex;
        while (s[i] != '\0')
        {
            hashArr[s[i]] += 1;
            if (hashArr[s[i]] == 1)
                tmpMaxSub++;
            else
                break ;
            i++;
        }
        if (tmpMaxSub > maxSub)
            maxSub = tmpMaxSub;
        tmpMaxSub = 0;
        startIndex++;
    }
    return (maxSub);
}
