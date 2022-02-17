bool canConstruct(char * ransomNote, char * magazine){

    int constStrLen = strlen(ransomNote);
    int origStrLen = strlen(magazine);
    int magazineHash[26] = {0};
    int ransomHash[26] = {0};

    for (int i = 0; i < origStrLen; i++)
        magazineHash[magazine[i] - 'a'] += 1;
    for (int i = 0; i < constStrLen; i++)
        ransomHash[ransomNote[i] - 'a'] += 1;

    for (int i = 0; i < 26; i++)
        if (ransomHash[i] > magazineHash[i])
            return (false);
    return (true);
}
