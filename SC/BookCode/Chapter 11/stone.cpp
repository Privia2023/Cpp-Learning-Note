// 程序清单11.18 P414
// stone.cpp -- user-defined conversions
// compile with stonewt.cpp

#include <iostream>
#include "stonewt.h"
using namespace std;

void display(const Stonewt &st, int n);
int main()
{
    Stonewt incogito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);   // same as Stonewt wolfe = 285.7
    Stonewt taft(21, 8);

    cout << "The celebrity weighted ";
    incogito.show_btn();
    cout << "The detective weighted ";
    wolfe.show_btn();
    cout << "The President weighted ";
    taft.show_lbs();
    incogito = 276.8; // uses constructor for conversion
    taft = 325;       // same as taft = Stonewt(325)
    cout << "After dinner, the celebrity weighted ";
    incogito.show_btn();
    cout << "After dinner, the President weighted ";
    incogito.show_btn();
    cout << "After dinner, the President weighted ";
    taft.show_lbs();
    display(taft, 2);
    cout << "The wrestler weighted wven more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";

    return 0;
}
void display(const Stonewt &st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow!";
        st.show_btn();
    }
}