/*
  功能：　打印作者的名字和地址
　日期：　2015年 02月 11日 星期三 19:44:03
　作者：　杨海停

*/

#include<iostream>
using namespace std;

void printNameAddr(string, string);

int main()
{
  string name = "杨海停";
  string addr = "深圳市龙岗区坂田扬马市场８栋";
  printNameAddr(name, addr);
 
  return 0;
}

void printNameAddr(string name, string addr)
{
  cout << name <<  " " << "住在" << " " << addr << endl;
}
