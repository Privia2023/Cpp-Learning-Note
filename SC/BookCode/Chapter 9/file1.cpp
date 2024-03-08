// 程序清单9.2 P303
// file1.cpp -- example of a three-file program
#include <iostream>
#include "coordin.h" //structure templates,function prototypes

using namespace std;

// g++ external.cpp support.cpp - o res
int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) // slick use of cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Bye!\n";
    return 0;
}