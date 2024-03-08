// 程序清单10.4 P356
// stock10.h -- Stock declaration with constructors,destructor added
#ifndef STOCK10_H_
#define STOCK10_H_
#include <string>

class Stock

{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val};

public:
    // two constructors
    Stock(); // default constructor
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock(); // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};


#endif