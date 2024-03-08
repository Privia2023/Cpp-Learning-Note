// 程序清单9.8 P315
// twofile2.cpp -- variables with internal and external linkage
#include <iostream>

extern int tom;       // tom defined elsewhere
static int dick = 10; // override external dick
int harry = 200;      // external variable definition
                      // no conflict with twofile1 harry

using namespace std;
void remote_access()
{
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}

using namespace std;
