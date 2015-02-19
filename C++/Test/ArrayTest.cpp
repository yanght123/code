#include<iostream>
using namespace std;

int main()
{
  char names[] = "hello world";
  char[] *p = new char[30];
  p = &names; 
  cout << names << endl;
  cout << p << "\t" << *p <<endl;

 return 0;
}
