bool checkInclusion(char * s1, char * s2)
{
    int hash[26] = {0};
    int s1len = strlen(s1);
    int s2len = strlen(s2);
    int isValidSize = 0;

    if (s1len > s2len)
        return (false);
    for (int i = 0; i < s1len; i++)
        hash[s1[i] - 'a'] += 1;
    for (int i = 0; i < s2len; i++)
    {
        if (hash[s2[i] - 'a'] != 0)
        {
            isValidSize = 0;
            for (int j = i; j < s2len; j++)
            {
                if (hash[s2[j] - 'a'] == 0)
                    break ;
                else
                {
                    hash[s2[j] -'a'] -= 1;
                    isValidSize++;
                }
            }
            if (isValidSize == s1len)
                return (true);
            else
            {
                memset(hash, 0, 26 * sizeof(int));
                for (int j = 0; j < s1len; j++)
                    hash[s1[j]-'a'] += 1;
            }
        }
    }
    return (false);
}
