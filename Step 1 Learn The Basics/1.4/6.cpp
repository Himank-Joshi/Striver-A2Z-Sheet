int sumOfDivisors(int n)
{
    if (n == 1)
        return 1;

    int sum = 0; // Include 1 as a divisor

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (n / i != i)
                sum += n / i;
        }
    }

    return sum;
}

int sumOfAllDivisors(int n)
{
    // Write your code here.
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += sumOfDivisors(i);
    }
    return sum;
}
