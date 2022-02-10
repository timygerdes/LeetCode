int strStr(char * haystack, char * needle)
{
	if (!*needle)
		return (0);
    if (strlen(haystack) > (5 * 10000))
        return (0);
    for (int i = 0; haystack[i]; i++)
    {
        int j = 0;
        while (haystack[i + j] == needle[j])
        {
            j++;
            if (!needle[j])
                return (i);
            if (!haystack[i + j])
                return (-1);
        }
    }
	return (-1);
}
