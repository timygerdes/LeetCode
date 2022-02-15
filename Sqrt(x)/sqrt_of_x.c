int mySqrt(int x)
{
    int subtractVal = 1;
    int counter = 0;

    while ((x - subtractVal) >= 0)
    {
        x = x - subtractVal;
        subtractVal = subtractVal + 2;
        counter++;
    }
    return (counter);
}
