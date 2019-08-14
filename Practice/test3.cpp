#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<queue>
#include<list>
#include<functional>
#include<map>
#include<string>
#include<sstream>
using namespace std;

static int N, M, x, y;
static int task_time[1010];

typedef pair<int, int> pii;
static vector<pii> G[1010];
static int indegree[1010];

struct cmp
{
    bool operator()(const pii& p1, const pii& p2) const
    {
        if (p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second > p2.second;
    }
};

void topological(vector<int>& ans)
{
    priority_queue<pii, vector<pii>, cmp> qu;
    for (int i = 1; i <= N; i++)
    {
        if (indegree[i] == 0) qu.push(make_pair(i,task_time[i]));
    }

    while (!qu.empty())
    {
        int t = qu.top().first;
        qu.pop();
        ans.push_back(t);
        for (int i = 0; i < G[t].size(); i++)
        {
            int v = G[t][i].first;
            --indegree[v];
            if (indegree[v] == 0) qu.push(G[t][i]);
        }
        G[t].clear();
    }

}


int mainP3()
{
    scanf("%d%d", &N, &M);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &task_time[i]);
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d", &x, &y);
        G[x].push_back(make_pair(y, task_time[y])); ++indegree[y];
    }
    vector<int> ans;
    topological(ans);
    for (int i = 0; i < ans.size(); i++)
    {
        if (i) printf(" %d", ans[i]);
        else printf("%d", ans[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
