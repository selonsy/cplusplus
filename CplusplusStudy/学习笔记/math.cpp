#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 取绝对值
    int a = -9;
    int a_abs = abs(a);
    cout << a_abs << endl; //输出 9

    // 向下向上取整
    double b = 9.527;
    int b_up = ceil(b);
    int b_down = floor(b);
    cout << b_up << " " << b_down << endl; //输出 10 9

    // 保留两位小数
    double c = 9.527345;

    // 四舍五入
    double d = 9.527345;
    double d_round = round(d);
    cout<< d_round << endl; //输出 10

    
    return 0;
}