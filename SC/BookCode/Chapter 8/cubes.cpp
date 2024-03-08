// 8.2.3 引用的属性和特别之处 程序清单8.5 P261
// cubes.cpp -- regular and reference arguments
#include <iostream>

using namespace std;
double cube(double a)
{
    a *= a * a;
    return a;
}
double refcube(double &ra)
{
    ra *= ra * ra;
    return ra;
}
int main()
{
    double x = 3.0;
    cout << cube(x);
    cout << " = cube of " << x << endl;
    // 变量a 位于cube()中，它被初始化为x的值，但修改a并不会影响x
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    return 0;
}
