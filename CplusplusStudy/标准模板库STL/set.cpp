#include <iostream>
#include <set>
using namespace std;
// std::set 是关联容器，含有 Key 类型对象的已排序集。用比较函数 比较 (Compare) 进行排序。
// 搜索、移除和插入拥有对数复杂度。 set 通常以红黑树实现。

// 在每个标准库使用比较 (Compare) 概念的场所，用等价关系确定唯一性。
// 不精确地说，若二个对象 a 与 b 相互间既不比较大于亦不比较小于： !comp(a, b) && !comp(b, a) ，则认为它们等价。

// std::set 满足容器 (Container) 、具分配器容器 (AllocatorAwareContainer) 、关联容器 (AssociativeContainer) 和可逆容器 (ReversibleContainer) 的要求。

// 成员类型
// iterator
// const_iterator
// reverse_iterator
// const_reverse_iterator

// 成员函数
// begin()/cbegin();end()/cend();      //cbegin():c++11新增,返回const的迭代器
// rbegin()/crbegin();rend()/crend();
// 1、容量
// empty：检查容器是否为空
// size：返回容纳的元素数
// max_size：返回可容纳的最大元素数

// 2、修改器
// clear：清除内容
// insert：插入元素或结点 (C++17 起)
// emplace：原位构造元素
// emplace_hint：使用提示原位构造元素
// erase：擦除元素
// swap：交换内容
// extract：从另一容器释出结点
// merge：从另一容器接合结点
// 3、查找
// count：返回匹配特定键的元素数量
// find：寻找带有特定键的元素
// contains：检查容器是否含有带特定关键的元素
// equal_range：返回匹配特定键的元素范围
// lower_bound：返回指向首个不小于给定键的元素的迭代器
// upper_bound：返回指向首个大于给定键的元素的迭代器
// 4、观察器
// key_comp：返回用于比较键的函数
// value_comp：返回用于在value_type类型的对象中比较键的函数。
// 5、非成员函数：按照字典顺序比较 set 中的值
// operator==
// operator!=
// operator<
// operator<=
// operator>
// operator>=

int main()
{

}