#include<iostream>
using namespace std;

int main()
{
  double * p = new double[10];
  
  for(int i = 0; i < 10; i++)
  {
    p[i] = i + 1;
  }
  
  cout << "数组的值：" << endl;
 
  for(int i = 0; i < 10; i++)
  {
    cout <<   i <<  "的值是：" << * (p + i) << endl;
  }
  
  cout << "指针当数组名使用：" << endl;
  for(int i = 0; i << 10; i++)
  {
    cout << i + 1 << ":" << p[i] << endl;
  }

  cout << p[0] <<  endl;  
  cout << p[1] << endl;
  cout << p[2] << endl;
  delete [] p;
  return 0;
}
