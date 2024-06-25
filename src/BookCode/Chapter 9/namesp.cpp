// 程序清单9.12 P332
// namesp.cpp -- namespace
#include <iostream>
#include "namesp.h"

using namespace std;

namespace pers
{
    void getPerson(Person &rp)
    {
        cout << "Enter first name: ";
        cin >> rp.fname;
        cout << "Enter last name: ";
        cin >> rp.lname;
    }
    void showPerson(const Person &rp)
    {
        cout << rp.lname << ", " << rp.fname;
    }
} // namespace pers

namespace debts
{
    void getDebt(Debt &rd)
    {
        getPerson(rd.name);
        cout << "Enter debt: ";
        cin >> rd.amount;
    }
    void showDebt(const Debt &rd)
    {
        showPerson(rd.name);
        cout << ": $" << rd.amount << endl;
    }
    double sumDebts(const Debt ar[], int n)
    {
        double total = 0;
        for (int i = 0; i < n; i++)
            total += ar[i].amount;
        return total;
    }
} // namespace debts

int main()
{
    return 0;
}