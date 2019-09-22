#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v[i] = temp;
    }
    int max = -999;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += v[(i + j) % n];
            if (sum > max)
                max = sum;
            if (sum < 0)
                sum = 0;
        }
    }
    cout << max;
    return 0;
}