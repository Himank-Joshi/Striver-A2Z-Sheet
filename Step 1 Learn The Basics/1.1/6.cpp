#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 1;
        return 0;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c;
    return 0;
}