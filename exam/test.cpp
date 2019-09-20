#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <math.h>
#include <set>
#include <stack>
#include <queue>
#include <list>
using namespace std;
struct ListNode
{
    int data;
    struct ListNode *next;
};

ListNode *reverseBetween(struct ListNode *head, int m, int n)
{
    if (!head || !head->next || n == m)
        return head; //预处理
    struct ListNode *L = (struct ListNode *)malloc(sizeof(struct ListNode));
    L->next = head; //删除节点常用手段考虑加个头指针
    struct ListNode *pre = NULL;
    struct ListNode *p = L;
    int temp_m = m;
    int temp_n = n;
    //将p转移到反转链表的第一个节点，pre保存前一个节点
    while (temp_m-- >= 1)
    {
        pre = p;
        p = p->next;
    }

    struct ListNode *reverse_head = NULL;
    struct ListNode *reverse_tail = p;
    struct ListNode *reverse_tail_after = NULL;
    struct ListNode *q = NULL;
    //进行反转
    while (temp_n - m > 0)
    {
        q = p->next;
        reverse_tail_after = q->next;
        p->next = reverse_head;
        reverse_head = p;
        p = q;
        temp_n--;
    }

    p->next = reverse_head;
    reverse_head = p;
    pre->next = reverse_head;

    reverse_tail->next = reverse_tail_after;
    return L->next;
}

int main()
{
    stack<int> si;
    stack<char> sc;
    stack<string> ss;

    vector<int> vi = {1, 2, 3, 4, 5};
    vector<int>::iterator i;
    vector<char> vc;
    vector<string> vs;

    queue<int> qi;
    queue<char> qc;
    queue<string> qs;

    cout << vi.capacity() << endl;
    list<int> li = {1, 2, 3, 4, 5};

    return 0;
};