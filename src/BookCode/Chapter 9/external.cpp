// 程序清单9.5 P312
// external.cpp -- external variables
// comile with support.cpp
#include <iostream>

using namespace std;

// external variable
double warming = 0.3; // warming defined
// function prototypes
void update(double dt);
void local();

// g++ external.cpp support.cpp -o res
int main() // uses global variable
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1); // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";
    return 0;
}