#ifndef STOCK_H_
#define STOCK_H_

#include<iostream>

class stock
{
  private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val; }
  public:
    void acquire(const std::string & com, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif
