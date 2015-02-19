#include<iostream>

using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
  T temp;
  temp = a;
  a = b;
  b = temp;
}


int main()
{
  int aa = 10;
  int bb = 12;
  cout << "aa=" << aa << "\t" << "bb=" << bb << endl;
  cout << "swap the values of a and b " << endl;
  
  Swap(aa, bb);
  cout << "a=" << aa << "\t" << "bb=" << bb << endl;

  double x = 11.11;
  double y = 12.22;
  cout << "x=" << x << "\t" << "y=" << y << endl;
  cout << "swap the values of x and y." << endl;

  Swap(x,y);
  cout << "x=" << x << "\t" << "y=" << y << endl; 
  
  return 0;
}

