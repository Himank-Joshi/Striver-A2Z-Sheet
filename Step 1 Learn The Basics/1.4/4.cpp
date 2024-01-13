int calcGCD(int n, int m)
{
    // Write your code here.
    if (n > m)
        swap(n, m);

    while (m > n)
    {
        if (m % n == 0)
            return n;
        int temp = m;
        m = n;
        n = temp % n;
    }
    return n;
}