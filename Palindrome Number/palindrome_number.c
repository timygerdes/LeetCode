bool isPalindrome(int x)
{
    int origValue = x, remainder;
    long revValue = 0;

    if (x < 0)
        return (false);
    while (x != 0) {
        remainder = x % 10;
        revValue = revValue * 10 + remainder;
        x /= 10;
    }
    if (revValue == origValue)
        return (true);
    else
        return (false);
}
