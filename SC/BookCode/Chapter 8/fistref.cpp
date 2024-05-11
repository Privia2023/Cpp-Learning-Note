/**
 * @file  fistref.cpp
 * @brief 程序清单8.2 -- defining and using a reference
 * @date 2024-04
 *
 *  C++给 & 赋予了另一个含义：声明引用，其中rodents就起到了这个作用，值也会发生改变因为操作的是同一块地址空间！！！
 */
#include <iostream>

using namespace std;

int main()
{
    int rats = 101;
    int &rodents = rats; // rodents is a reference
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    // some implementations require type casting the following
    // addresses to type unsigned
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents;
    return 0;
}