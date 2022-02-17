bool isAnagram(char * s, char * t)
{
    int slen = strlen(s);
    int tlen = strlen(t);
    int sHash[26] = {0};
    int tHash[26] = {0};

    if (slen != tlen)
        return (false);
    for (int i = 0; i < slen; i++)
        sHash[s[i] - 'a'] += 1;
    for (int i = 0; i < tlen; i++)
        tHash[t[i] - 'a'] += 1;
    for (int i = 0; i < 26; i++)
        if (tHash[i] > sHash[i])
            return (false);
    return (true);
}
