// 1、rand() 不需要参数，它会返回一个从0到最大随机数的任意整数，最大随机数的大小通常是固定的一个大整数。
// 2、如果你要产生0 ~99这100个整数中的一个随机整数，可以表达为：int num = rand() % 100;
//    这样，num的值就是一个0 ~99中的一个随机数了。
// 3、如果要产生1 ~100，则是这样：int num = rand() % 100 + 1;
// 4、总结来说，可以表示为：int num = rand() % n + a; 其中的 a 是起始值，n - 1 + a是终止值，n是整数的范围。
// 5、一般性：rand() % (b - a + 1) + a; 就表示 a ~ b 之间的一个随机整数。
// 6、若要产生0 ~1之间的小数，则可以先取得0 ~10的整数，然后均除以10即可得到“随机到十分位”的10个随机小数。
// 若要得到“随机到百分位”的随机小数，则需要先得到0 ~100的10个整数，然后均除以100，其它情况依此类推。

//注意：虽然说rand（）产生的数是随机数，但是这些输出的结果在定义之后是不会再变化了，也就是编译器重新编译后输出的结果是相同的。
//如下面的例子所示，写完了代码，不管运行多少次，结果都是一样的，也称之为伪随机。

//真随机：
//需要使用 time 和 srand 来实现真正的随机数。
//time（0）可以输出一个与时间有关的数，再结合 srand() 函数即可产生真正的随机数。
// 注：
// time : <ctime>
// srand: <cstdlib>
// rand:  <cstdlib>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a = rand();

    int b = rand() % 100; //[0~99]

    int c = rand() % 100 + 1; //[1~100]

    int begin = 50, end = 60;
    int d = rand() % (end - begin + 1) + begin; //[begin~end]

    int __e = (rand() % 10);
    double _e = __e * 1.0;
    double e = _e / 10; //小数，十分位：[0~1]

    double f = (rand() % 10) * 1.0 / 100; //小数，百分位：[0~1]

    cout << a << endl
         << b << endl
         << c << endl
         << d << endl
         << e << endl
         << f << endl;

    //下面的代码，运行多次的话，输出的结果不一样。
    srand((int)time(0));
    cout << rand() % 100 + 100 << endl;
    cout << rand() % 100 + 100 << endl;
    cout << rand() % 100 + 100 << endl;
    cout << rand() % 100 + 100 << endl;

    return 0;
}