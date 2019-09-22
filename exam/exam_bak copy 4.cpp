#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

struct node
{
    node(int p) : parent(p) { child = vector<int>(); };
    int parent;
    vector<int> child;
};

int main()
{
    int n;
    cin >> n;
    vector<node> v(n, node(-1));
    long long ago = 0;
    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
        v[i].parent = temp;
        v[temp].child.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> temp = v[i].child;
        long long sum = 0;
        for (int j = 0; j < temp.size(); j++)
            sum += v[temp[j]].child.size(); //儿子的儿子的数量
        ago += sum;
    }
    cout << (ago * 3 % 1000000007);
}