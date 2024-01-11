#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int even, odd, num, dig;
    cin >> num;
    while (num > 0)
    {
        dig = num % 10;
        num /= 10;
        if (dig % 2 == 0)
            even += dig;
        else
            odd += dig;
    }
    cout << even << " " << odd;
}
