/*
  描述：函数值指针的用法
　日期：2015年 02月 12日 星期四 16:49:04 

*/
#include<iostream>

using namespace std;

double square(double, double);
void display(double, double, double (*p_square)(double, double));

int main()
{
  display(10.0, 10.0, square);
}

void display(double x, double y, double (*p_square)(double x, double y))
{
  cout << "square: " << (*p_square)(x, y) << endl;
}

double square(double x, double y)
{
  return x * y;
}
