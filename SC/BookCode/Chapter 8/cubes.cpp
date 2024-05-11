/**
 * @file  cubes.cpp
 * @brief 程序清单8.5 -- regular and reference arguments
 * @date 2024-04
 *
 *
 */
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
    // a是cube()的内部变量
    cout << cube(x);
    cout << " = cube of " << x << endl;

    cout << refcube(x);
    cout << " = cube of " << x << endl;
    return 0;
}
