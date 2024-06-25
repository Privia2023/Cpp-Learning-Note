/**
 * @file  strquote.cpp
 * @brief 程序清单 -- different designs
 * @date 2024-04
 *
 * version3 这个函数内部的temp是临时的，不能引用
 */
#include <iostream>
#include <string>
using namespace std;

string version1(const string &s1, const string &s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}
const string &version2(string &s1, const string &s2) // has side effect
{
    s1 = s2 + s1 + s2;
    // safe to return reference passed to function
    return s1;
}

const string &version3(string &s1, const string &s2) // bad design
{
    string temp;
    temp = s2 + s1 + s2;
    // unsafe to return reference to local variable
    return temp;
}

int main()
{
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    result = version2(input, "###");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    cout << "Resetting original string.\n";
    input = copy;
    result = version3(input, "@@@"); // 程序试图引用已经释放的内存
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    return 0;
}