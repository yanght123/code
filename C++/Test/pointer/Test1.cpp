#include<iostream>

using namespace std;

template <typename T>
void r( T  &a, T &b);

int main()
{
  int x = 10;
  int y = 1000;
  cout << "x = " << x << endl;
  cout << " execute r method after."<< endl;
  r(x, y);
  cout << "x = " << x << endl;
}

template <typename T>
void r(T &a, T &b)
{
  a = a + b;
}
