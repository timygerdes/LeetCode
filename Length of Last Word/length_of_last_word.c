int lengthOfLastWord(char * s){
    int i = 0, c = 0;

    i = strlen(s) - 1;
    while (s[i] == ' ' && i >= 0)
        i--;
    while (i >= 0 && s[i] != ' ')
    {
        c++;
        i--;
    }
    return (c);
}
