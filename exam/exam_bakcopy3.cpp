#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

void func1()
{
    int n, x;
    cin >> n >> x;
    int d = 10;
    int max = 10;
    while (++d)
    {
        int flag = 0;
        int num = n;
        long base = 1;
        vector<int> v;
        while (base * d < n)
        {
            base *= d;
        }
        while (num > 0)
        {
            int times = num / base;
            if (times > 9)
            {
                flag = 1;
                break;
            }
            else
            {
                v.push_back(times);
                num -= times * base;
                base /= d;
            }
        }
        while (base >= 1)
        {
            v.push_back(0);
            base /= d;
        }
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum *= 10;
            sum += v[i];
        }
        if (sum >= x)
        {
            max = d;
        }
        else
        {
            break;
        }
    }
    cout << max;
}
void func2()
{
    int n, x;
    cin >> n >> x;
    string s = to_string(x);
    int a = s[s.length() - 1] - '0';
    int b = s[0] - '0';
    int c = s.length();
    int res;

    if (c == 2 && b == 1)
        res = n - a;
    else if (c == 2)
    {
        res = (n - a) / b;
    }

    cout << res;
}
int main()
{
    // func1();
    func2();
}