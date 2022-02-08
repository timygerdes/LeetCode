int climbStairs(int n)
{
    int ways = 0, step1 = 2, step2 = 3;

    if (n <= 3)
        return n;
    else
    {
        for (int i = 3; i < n; i++)
        {
            ways = step1 + step2;
            step1 = step2;
            step2 = ways;
        }
    }
    return (ways);
}
