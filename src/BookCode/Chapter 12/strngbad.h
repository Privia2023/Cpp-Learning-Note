// 程序清单12.1 P426
// strngbad.h -- flawed class definition
#include <iostream>
using namespace std;
#ifndef __STRNGBAD__H__
#define __STRNGBAD__H__
class Stringbad
{
private:
    char *str;              // pointer to string
    int len;                // length of string
    static int num_strings; // number o f string

public:
    Stringbad(const char *s); // constructor
    Stringbad();              // defautl constructor
    ~Stringbad();             // destructor
    // friend function
    friend ostream &operator<<(ostream &os, const Stringbad &st);
};

#endif //!__STRNGBAD__H__
