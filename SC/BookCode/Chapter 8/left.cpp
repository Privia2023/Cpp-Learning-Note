// 8.3 默认参数 程序清单8.9 P275
// left.cpp -- string function with a default argument
#include <iostream>

const int ArSize = 80;
char *left(const char *str, int n = 1);
using namespace std;

int main()
{
    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete[] ps; // free old string
    ps = left(sample);
    cout << ps << endl;
    delete[] ps; // free new string
    return 0;
}
char *left(const char *str, int n)
{
    if (n < 0)
        n = 0;
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';
    return p;
}