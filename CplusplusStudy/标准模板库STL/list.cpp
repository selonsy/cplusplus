#include <iostream>
#include <list>
#include <forward_list>
#include <numeric>
#include <algorithm>
using namespace std;

// API说明：
// Lists将元素按顺序储存在链表中. 与向量(vectors)相比, 它允许快速的插入和删除( O(1) )，但是随机访问却比较慢( O(n) )。
// assign() 给list赋值
// back() 返回最后一个元素
// begin() 返回指向第一个元素的迭代器
// clear() 删除所有元素
// empty() 如果list是空的则返回true
// end() 返回末尾的迭代器
// erase() 删除一个元素
// front() 返回第一个元素
// get_allocator() 返回list的配置器
// insert() 插入一个元素到list中
// max_size() 返回list能容纳的最大元素数量
// merge() 合并两个list
// pop_back() 删除最后一个元素
// pop_front() 删除第一个元素
// push_back() 在list的末尾添加一个元素
// push_front() 在list的头部添加一个元素
// rbegin() 返回指向第一个元素的逆向迭代器
// remove() 从list删除元素
// remove_if() 按指定条件删除元素
// rend() 指向list末尾的逆向迭代器
// resize() 改变list的大小
// reverse() 把list的元素倒转
// size() 返回list中的元素个数
// sort() 给list排序
// splice() 合并两个list
// swap() 交换两个list
// unique() 删除list中重复的元素

//创建一个list容器的实例LISTINT
typedef list<int> LISTINT;
//创建一个list容器的实例LISTCHAR
typedef list<char> LISTCHAR;
//从前向后显示list队列的全部元素
void put_list(LISTINT list, char *name)
{
    LISTINT::iterator plist;
    cout << "The contents of " << name << " : ";
    for (plist = list.begin(); plist != list.end(); plist++)
        cout << *plist << " ";
    cout << endl;
}

int main()
{
    //用list容器处理整型数据
    //用LISTINT创建一个名为listOne的list对象
    LISTINT listOne;
    //声明i为迭代器
    LISTINT::iterator i;

    //从前面向listOne容器中添加数据
    listOne.push_front(2);
    listOne.push_front(1);

    //从后面向listOne容器中添加数据
    listOne.push_back(3);
    listOne.push_back(4);

    //从前向后显示listOne中的数据
    cout << "listOne.begin()--- listOne.end():" << endl;
    for (i = listOne.begin(); i != listOne.end(); ++i)
        cout << *i << " "; // 输出：1 2 3 4
    cout << endl;

    //从后向后显示listOne中的数据
    LISTINT::reverse_iterator ir;
    cout << "listOne.rbegin()---listOne.rend():" << endl;
    for (ir = listOne.rbegin(); ir != listOne.rend(); ir++)
    {
        cout << *ir << " "; // 输出：4 3 2 1
    }
    cout << endl;

    //使用STL的accumulate(累加)算法
    int result = accumulate(listOne.begin(), listOne.end(), 0);
    cout << "Sum=" << result << endl; // 输出：10
    cout << "------------------" << endl;

    //--------------------------
    //用list容器处理字符型数据
    //--------------------------

    //用LISTCHAR创建一个名为listOne的list对象
    LISTCHAR listTwo;
    //声明i为迭代器
    LISTCHAR::iterator j;

    //从前面向listTwo容器中添加数据
    listTwo.push_front('A');
    listTwo.push_front('B');

    //从后面向listTwo容器中添加数据
    listTwo.push_back('x');
    listTwo.push_back('y');

    //从前向后显示listTwo中的数据
    cout << "listTwo.begin()---listTwo.end():" << endl;
    for (j = listTwo.begin(); j != listTwo.end(); ++j)
        cout << char(*j) << " "; // 输出：B A x y
    cout << endl;

    //使用STL的max_element算法求listTwo中的最大元素并显示
    j = max_element(listTwo.begin(), listTwo.end());
    cout << "The maximum element in listTwo is: " << char(*j) << endl; // 输出：y

    //list1对象初始为空
    LISTINT list1;
    //list2对象最初有10个值为6的元素
    LISTINT list2(10, 6);
    //list3对象最初有9个值为6的元素
    LISTINT list3(list2.begin(), --list2.end());

    //声明一个名为i的双向迭代器
    // LISTINT::iterator i;

    //从前向后显示各list对象的元素
    put_list(list1, "list1");
    put_list(list2, "list2");
    put_list(list3, "list3");

    //从list1序列后面添加两个元素
    list1.push_back(2);
    list1.push_back(4);
    cout << "list1.push_back(2) and list1.push_back(4):" << endl;
    put_list(list1, "list1");

    //从list1序列前面添加两个元素
    list1.push_front(5);
    list1.push_front(7);
    cout << "list1.push_front(5) and list1.push_front(7):" << endl;
    put_list(list1, "list1");

    //在list1序列中间插入数据
    list1.insert(++list1.begin(), 3, 9);
    cout << "list1.insert(list1.begin()+1,3,9):" << endl;
    put_list(list1, "list1");

    //测试引用类函数
    cout << "list1.front()=" << list1.front() << endl;
    cout << "list1.back()=" << list1.back() << endl;

    //从list1序列的前后各移去一个元素
    list1.pop_front();
    list1.pop_back();
    cout << "list1.pop_front() and list1.pop_back():" << endl;
    put_list(list1, "list1");

    //清除list1中的第2个元素
    list1.erase(++list1.begin());
    cout << "list1.erase(++list1.begin()):" << endl;
    put_list(list1, "list1");

    //对list2赋值并显示
    list2.assign(8, 1);
    cout << "list2.assign(8,1):" << endl;
    put_list(list2, "list2");

    //显示序列的状态信息
    cout << "list1.max_size(): " << list1.max_size() << endl;
    cout << "list1.size(): " << list1.size() << endl;
    cout << "list1.empty(): " << list1.empty() << endl;

    //list序列容器的运算
    put_list(list1, "list1");
    put_list(list3, "list3");
    cout << "list1>list3: " << (list1 > list3) << endl;
    cout << "list1<list3: " << (list1 < list3) << endl;

    //对list1容器排序
    list1.sort();
    put_list(list1, "list1");

    //结合处理
    list1.splice(++list1.begin(), list3);
    put_list(list1, "list1");
    put_list(list3, "list3");

    //逆序输出 
    list1.reverse();
    put_list(list1, "list1");

    //去重
    list1.unique();
    put_list(list1, "list1");

    //交换
    list1.swap(list3);
    put_list(list1, "list1");
    put_list(list3, "list3");

    // list3.remove_if();
    list3.remove(9);
    put_list(list3, "list3");
}
