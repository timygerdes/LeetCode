void reverseString(char* s, int sSize)
{
    char c;
    int startIndex = 0;
    int endIndex = sSize - 1;

    while (startIndex < endIndex)
    {
        c = s[startIndex];
        s[startIndex] = s[endIndex];
        s[endIndex] = c;
        startIndex++;
        endIndex--;
    }
}
