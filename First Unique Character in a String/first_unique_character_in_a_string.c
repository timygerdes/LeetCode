int firstUniqChar(char * s)
{
    int arr[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        arr[s[i] - 'a'] += 1;
    for (int i = 0; s[i] != '\0'; i++)
        if (arr[s[i] - 'a'] == 1)
            return (i);
    return (-1);
}
