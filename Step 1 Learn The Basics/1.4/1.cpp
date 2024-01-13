int countDigits(int n)
{
    // Write your code here.
    int copy = n;
    int count = 0;
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        n /= 10;
        if (digit == 0)
            continue;
        if (copy % digit == 0)
            count++;
    }
    return count;
}