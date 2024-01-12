// 1
void nForest(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// 2
void nForest(int n)
{
    // Write your code here.

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 3
void nTriangle(int n)
{
    // Write your code here

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// 4
void triangle(int n)
{
    // Write your code

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
// 5
void seeding(int n)
{
    // Write your code here.
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// 6
void nNumberTriangle(int n)
{
    // Write your code here.

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// 7
void nStarTriangle(int n)
{
    // Write your code here.
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
            cout << " ";
        for (int j = 1; j <= ((i - 1) * 2 + 1); j++)
            cout << "*";
        cout << endl;
        space--;
    }
}
// 8
void nStarTriangle(int n)
{
    // Write your code here.
    int space = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
            cout << " ";
        for (int j = 1; j <= ((i - 1) * 2 + 1); j++)
            cout << "*";
        cout << endl;
        space++;
    }
}
// 9
void nStarDiamond(int n)
{
    // Write your code here.
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
            cout << " ";
        for (int j = 1; j <= ((i - 1) * 2 + 1); j++)
            cout << "*";
        cout << endl;
        space--;
    }

    space = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
            cout << " ";
        for (int j = 1; j <= ((i - 1) * 2 + 1); j++)
            cout << "*";
        cout << endl;
        space++;
    }
}
// 10
void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// 11
void nBinaryTriangle(int n)
{
    // Write your code here.
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            num = 1;
        else
            num = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            if (num == 1)
                num = 0;
            else
                num = 1;
        }
        cout << endl;
    }
}
// 12
void numberCrown(int n)
{
    // Write your code here.
    // 2 pyrimaids let gap between be gap1
    int gap1 = (n - 1) * 2;
    int gap2 = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= gap1 + gap2; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        gap1 -= 2;
        gap2 -= 1;
        cout << endl;
    }
}
// 13 similar
// 14 similar
// 15 similar
// 16 similar
// 17 similar
// 18 similar

// 19
void symmetry(int n)
{
    // Write your code here.
    int gap1 = 0, gap2 = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = 1; j <= gap1 + gap2; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
        gap1 += 2;
        gap2 += 1;
    }
    gap1 = (n - 1) * 2;
    gap2 = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = 1; j <= gap1 + gap2; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
        gap1 -= 2;
        gap2 -= 1;
    }
}

// 20 similar easy
// 21
void getStarPattern(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
            for (int j = 1; j <= n; j++)
                cout << "*";
        else
        {
            cout << "*";
            for (int i = 0; i < (n / 2); i++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}
// 22
void getNumberPattern(int n)
{
    // Write your code here.

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout << n - min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}