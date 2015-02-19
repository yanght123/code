/*
  功能：　输入一个以long为单位的距离，然后将他转换为码，１long == 220码
　日期：　2015年 02月 11日 星期三 20:09:44 
　作者：　杨海停
*/

#include<iostream>
using namespace std;

int convert(int);

int main()
{
  int l;
  
  cin >> l;
  cout << l << "long" << " = " <<  convert(l) << "码" << endl;

}

int convert(int l)
{
  return 220*l;;
}
