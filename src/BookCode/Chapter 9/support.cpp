// 程序清单9.6 P312
// support.cpp -- use external variable
// compile with external.cpp

#include <iostream>
using namespace std;

extern double warming; // use warming from another file

// function prototype
void update(double dt);
void local();

void update(double dt) // modifies global variable
{
    extern double warming; // optional redeclaration
    warming += dt;         // use global warming
    cout << "Updating global warming to " << warming << " degrees.\n";
}
void local() // use local variable
{
    double warming = 0.8; // new variable hides external one
    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the scope resolution operator
    cout << "But global warming = " << warming << " degrees.\n";
}
