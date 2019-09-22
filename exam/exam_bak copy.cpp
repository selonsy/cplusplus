#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <climits>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <list>

using namespace std;
int func(int n, int m)
{
    int num = 0;
    if (n == 1 && m == 1)
    {
        return 1;
    }
    if (n > 1)
    {
        num += func(n - 1, m);
    }
    if (m > 1)
    {
        num += func(n, m - 1);
    }
    return num;
};
int func3(int n, int m)
{
    int num = 0;
    if (n == 1 && m == 1)
    {
        return 1;
    }
    if (n > 1)
    {
        num += func(n - 1, m);
    }
    if (m > 1)
    {
        num += func(n, m - 1);
    }
    return num;
};
int func2(int n, int m)
{
    vector<vector<int>> a1(n + 1, vector<int>(m + 1));
    a1[0][0] = 0;
    for (int i = 0; i <= m; i++)
    {
        a1[0][i] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        a1[i][0] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            a1[i][j] = a1[i - 1][j] + a1[i][j - 1];
        }
    }
    return a1[n][m];
}

int main()
{
    int n, m;
    cin >> n >> m;
    int sum = 0, a = 1, b = 1;
    // if (n >= m)
    // {
    //     for (int i = n + 1; i <= (m + n); i++)
    //     {
    //         a = a * i;
    //     }
    //     for (int i = 1; i <= m; i++)
    //     {
    //         b = b * i;
    //     }
    // }
    // else
    // {

    //     for (int i = m + 1; i <= (m + n); i++)
    //     {
    //         a = a * i;
    //     }
    //     for (int i = 1; i <= n; i++)
    //     {
    //         b = b * i;
    //     }
    // }
    // sum = a / b;
    sum = func(n, m);
    cout << sum;
    return 0;
}
