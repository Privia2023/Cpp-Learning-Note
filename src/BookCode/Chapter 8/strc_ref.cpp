/**
 * @file  strc_ref.cpp
 * @brief 程序清单8.6 -- using structure reference
 * @date 2024-04
 *
 *
 */
#include <iostream>
#include <string>
using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};
void display(const free_throws &ft)
{
    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';
}

void set_pc(free_throws &ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

free_throws &accmulate(free_throws &target, const free_throws &source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
int main()
{
    // partial initializations - remaining members set to 0
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    // no initalization
    free_throws dup;
    set_pc(one);
    display(one);
    accmulate(team, one);
    display(team);

    // use return value as argument
    display(accmulate(team, two));
    accmulate(accmulate(team, three), four);
    display(team);

    // use return value in assignment
    dup = accmulate(team, five);
    cout << "Displaying team:\n";
    display(team);
    cout << "Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);

    // ill-advised assignment
    accmulate(dup, five) = four;
    cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);
    return 0;
}