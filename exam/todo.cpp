/*
1、层序遍历
2、先序遍历，后序遍历，中序遍历
3、深度优先
4、广度优先
5、图遍历
6、图的遍历（邻接矩阵和邻接表）https://blog.csdn.net/Autumncow/article/details/84332054
7、二叉树的建立
8、几种设计模式的demo代码
9、拓扑排序
*/
def fun(tree, i):
    l = len(tree)
    print(tree[i])
    if 2 * i + 1 < l and tree[i] != '#':
        fun(tree, 2*i+1)
    elif 2 * i + 1 >= l and tree[i] != '#':
        print('#')

    if 2 * i + 2 < l and tree[i] != '#':
        fun(tree, 2*i+2)
    elif 2 * i + 2 >= l and tree[i] != '#':
        print('#')

n = int(input())
tree = []
j = 0
for i in range(n):
    if (j - 1) // 2 < len(tree):
        if j > 0 and tree[(j - 1) // 2] == '#':
            tree.append('#')
            tree.append('#')
            j += 2
        if j > 0 and tree[(j - 1) // 2] == '#':
            i -= 1
            continue
    temp = input()
    tree.append(temp)
    j += 1
fun(tree, 0)
