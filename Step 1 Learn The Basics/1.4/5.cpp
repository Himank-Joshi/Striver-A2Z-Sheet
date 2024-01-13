bool checkArmstrong(int n)
{
    // Write your code here
    int numOfDigits = 0;
    int temp = n;
    while (temp)
    {
        temp /= 10;
        numOfDigits++;
    }
    temp = n;
    long armstrong = 0;
    while (temp)
    {
        armstrong += pow(temp % 10, numOfDigits);

        temp /= 10;
    }
    if (int(armstrong) == n)
        return true;
    return false;
}
