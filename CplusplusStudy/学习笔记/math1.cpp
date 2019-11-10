#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // 取绝对值
    int a1 = -9;
    int a_abs = abs(a1);
    cout << a_abs << endl; //输出 9

    // 向下向上取整
    double b = 9.527;
    int b_up = ceil(b);
    int b_down = floor(b);
    cout << b_up << " " << b_down << endl; //输出 10 9

    // 保留两位小数
    double c = 9.527345;
    char c_s[10];
    sprintf(c_s, "%.2lf", c);
    cout<<c_s<<endl;   //输出 9.53
    cout<<c<<endl;
    printf("%.2f",c); //输出 
    double a=123456.343001;
    cout<<"a的值为123456.343001"<<endl<<endl; 
    cout<<"不做任何操作，默认情况下只显示6六位数据："<<a<<endl<<endl;
    cout<<"指定10位小数且为浮点数表示setiosflags(ios::fixed)："<<setiosflags(ios::fixed)<<setprecision(10)<<a<<endl<<endl;
    cout<<"指定为10位小数且为指数形式表示setiosflags(ios::scientific)，就是留下有效位：如何指定的有效位超过本来的有效位，其输出就是本身的位数："<<setiosflags(ios::scientific)<<setprecision(12)<<a<<endl<<endl;
    cout<<"指定为10位小数且为指数形式表示setiosflags(ios::scientific)，就是留下有效位：setprecision(10)指定留下10位有效位"<<setiosflags(ios::scientific)<<setprecision(10)<<a<<endl<<endl;
    cout<<"左对齐:"<<setiosflags(ios::left)<<setprecision(20)<<a<<endl<<endl;
    cout<<"右对齐:"<<setiosflags(ios::right)<<setprecision(20)<<a<<endl<<endl;

    // 四舍五入
    double d = 9.527345;
    double d_round = round(d);
    cout<<d_round<<endl; // 输出 10

    
    return 0;
}