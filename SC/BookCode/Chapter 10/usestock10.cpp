// 程序清单10.6 P359
// usestok1.cpp -- using the Stock class
#include <iostream>
#include "stock10.h"

using namespace std;

int main()
{
    cout << "Using constructors to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0); // syntax1
    stock1.show();
    Stock stock2 = Stock("Boffo Objects", 2, 2.0); // syntax 2
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listening stock1 and stock2:\n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50.0); // temp object
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done\n";
    return 0;
}