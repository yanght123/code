#include <iostream>
#include "stock.h"

void stock::acquire(const std::string & com, long n, double pr)
{
  company = com;
  if(n < 0)
  {
    std::cout << "Number of shares can't be negative. "
              << company << " shares set to 0.0" << std::endl;
    shares = 0;
  }
  else
  {
    shares = n;
  }
  share_val = pr;
  set_tot();
}

void stock::buy(long num, double price)
{
  if(num < 0)
  {
    std::cout << "Number of shares purchased cant't be negative."
              << "Transaction is aborted." << std::endl;
  }
  else
  {
    shares += num;
    share_val = price;
    set_tot();
  }
}

void stock::sell(long num, double price)
{
  using std::cout;
  if(num < 0)
  {
    cout << "Number of shares sold can't be negative."
         << "Transaction is aborted." << std::endl;
  } 
  else
  {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void stock::update(double price)
{
  share_val = price;
  set_tot();
}

void stock::show()
{
  std::cout << "Company: " << company
            << " shares: " << shares << "\n"
            << " Shares price: $" << share_val
            << " Total Worth: $" << total_val << std::endl;
}
