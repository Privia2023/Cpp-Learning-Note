// 程序清单9.7 P314
// twofile1.cpp -- variables with external and internal linkage
#include <iostream> //to be compiled with two file2.cpp

int tom = 3;            // external variable definition
int dick = 30;          // external variable definition
static int harry = 300; // static,internal linkage

using namespace std;

// function prototype
void remote_access();
int main()
{
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}