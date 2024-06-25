// 程序清单12.2 P427
// strngbad.cpp -- Stringbad class methods

#include <iostream>
#include <cstring>
#include "strngbad.h"

using namespace std;

// initializing static class member
int Stringbad ::num_strings = 0;
Stringbad::Stringbad(const char *s)
{
    len = strlen(s);                                             // set size
    str = new char[len + 1];                                     // allot storage
    strcpy(str, s);                                              // initialize pointer
    num_strings++;                                               // set object count
    cout << num_strings << ":\"" << str << "\"object created\n"; // For your information
}

Stringbad::Stringbad() // default constructor
{
    len = 4;
    str = new char[4];
    strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ":\"" << str << "\"default object created\n"; // FYI
}

Stringbad::~Stringbad() // necessary destructor
{
    cout << "\"" << str << "\"object deleted\n"; // FYI
    --num_strings;                               // required
    cout << num_strings << " left\n";            // FYI
    delete[] str;                                // required
}

ostream &operator<<(ostream &os, const Stringbad &st)
{
    os << st.str;
    return os;
}