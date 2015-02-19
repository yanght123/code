#include <iostream>
#include "stock.h"

int main()
{
  stock st;
  st.acquire("NanoSmart", 20, 12.50);
  st.show();
  st.buy(15, 18.125);
  st.sell(400, 20.00);
  st.show();
  st.buy(3000000, 40.125);
  st.show();
  st.sell(300000, 0.125);
 
  return 0;
}
