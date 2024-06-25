// 程序清单12.3 P429
// vegnews.cpp -- using new and delete with classes
// compile with strngbad.cpp

#include <iostream>
#include "strngbad.h"

using namespace std;

void callme1(Stringbad &); // pass by reference
void callme2(Stringbad);   // pass by value

int main()
{
    {
        cout << "Starting an inner block\n";
        Stringbad headline1("Celery Stalks at Midnight");
        Stringbad headline2("Lettuce Prey");
        Stringbad sports("Spinach Leaves Bowl for Dollars");
        cout << "headline1:" << headline1 << endl;
        cout << "headline2:" << headline2 << endl;
        cout << "sports" << sports << endl;
        callme1(headline1);
        cout << "headline1:" << headline1 << endl;
        callme2(headline2);
        cout << "headline2" << headline2 << endl;
        cout << "Initialize one object to another:\n";
        Stringbad sailoer = sports;
        cout << "sailoer:" << sailoer << endl;
        cout << "Assign one object to another:\n";
        Stringbad knot;
        knot = headline1;
        cout << "knot" << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";
    return 0;
}
void callme1(Stringbad &rsb)
{
    cout << "String passed by reference:\n";
    cout << "    \"" << rsb << "\"\n";
}
void callme2(Stringbad sb)
{
    cout << "String passed by value\n";
    cout << "    \"" << sb << "\"\n";
}