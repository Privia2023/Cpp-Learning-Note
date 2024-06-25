// 程序清单11.21 P417
// stone1.cpp -- user-defined conversion functions
// compile with stonewt1.cpp
#include <iostream>
#include "stonewt1.h"
using namespace std;

int main()
{
    Stonewt poppins(9, 2.8); // 9 stone, 2.8 pounds
    double p_wt = poppins;   // implicit conversion
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";
    return 0;
}