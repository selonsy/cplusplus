#include <iostream>
#include <assert.h>
#include <vector>
#include "../base/Output.h"
using namespace std;
int main()
{
    //初始化
    vector<int> vec;                                    // 默认初始化，vector为空， size为0
    vector<int> vec1(vec);                              // vec1 初始化为 vec 的拷贝，要求类型必须相同。
    vector<int> vec2 = vec;                             // 同上
    vector<int> vec3 = {1, 2, 3, 4, 5, 6, 7};           // vec3 初始化为列表中元素的拷贝，列表中元素必须与 vec3 的元素类型相容
    vector<int> vec4(vec3.begin() + 2, vec3.end() - 1); // vec4 初始化为两个迭代器指定范围中元素的拷贝
    vector<int> vec5(7);                                // 默认值初始化，vec5 中将包含7个元素，每个元素进行缺省的值初始化，对于int，也就是被赋值为0，适用于初期元素大致可知，其余需要动态获取的情况。
    vector<int> vec6(7, 3);                             // 指定值初始化，vec6 被初始化为包含7个值为3的int。

    vec.size();                            //vec的实际大小
    vec.capacity();                        //vec的容量
    vec.empty();                           //bool，判断是否为空
    vec.clear();                           //删除容器中的全部元素。
    vec.max_size();                        //vec的最大容量
    vec[1];                                //下标访问，返回v中位置为n的元素
    vec.push_back(1);                      //成员函数,在向量的末尾插入值，如果有必要会扩展向量的大小。
    vec.resize(5);                         //修改vec的大小
    vec.resize(5, 9527);                   //修改vec的大小,并指定初值
    vec.reserve(100);                      //修改vec的capacity
    vec.pop_back();                        //末尾删除元素
    vec.insert(vec.begin(), 2, 3);         //在开始位置插入2个3.
    vec.insert(vec.begin(), {2, 3});       //在开始位置插入初始化列表.
    vec.erase(vec.begin()++);              //删除第二个位置的元素，并返回下一个的位置的迭代器
    vec.erase(vec.begin()++, vec.end()--); //删除指定区间内的元素，并返回下一个的位置的迭代器
    //迭代器遍历
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
        cout << *it << endl;
    //反向迭代器遍历
    vector<int>::reverse_iterator rit;
    for (rit = vec.rbegin(); rit != vec.rend(); rit++)
        cout << *rit << endl;
    //下标遍历
    for (unsigned i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
}
