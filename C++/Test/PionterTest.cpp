#include<iostream>
using namespace std;

int main()
{
  int arr[7] = {1,2,3,4,5,6,};
  int[] *p, *l;
  p  = &arr;
  
  for( l = p + 7; p < l ; p++)
  {
    cout << *p << endl;
  }
}
