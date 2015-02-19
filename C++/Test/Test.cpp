/*
 * Test.c++
 *
 *  Created on: 2015年2月11日
 *      Author: yanght
 */
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
bool printName(string name);

int main(){
   string name;
   int age;
   bool flag;
   cout << "Please input your name and age." << endl;
   cin >> name >> age;
   
   cout << "Your name is " <<  name <<" age is " << age << endl;
   cout << "sqrt(9)=" << sqrt(9) << endl;
   cout << "pow(2,10)=" << pow(2,10) << endl;
   flag =  printName("hello yanght.");
   if(flag){
      cout << "printName is executed." << endl;
   }

   cout << "=================" << endl;
   cout << "short: " << sizeof(short) << " bytes" << endl;
   cout << "int: " << sizeof(int) << " bytes" << endl;
   cout << "long: " << sizeof(long) << " bytes" << endl;
   cout << "float: " << sizeof(float) << " bytes" << endl;
   cout << "double: " << sizeof(double) << " bytes"<< endl;
 
   cout << "bool + int: " << true + 3 << endl;

   double n = 100.0;
   float  m = 32.2F;
   //cout <<"n's type is " << typeof(n) << "\t" << "m's type is " << typeof(m) << endl;
 
   string names[100];
   cout << "请输入你的名字："  << endl;
  // cin.get(names);
   cout << names << endl;

   enum colors {red,yellow,blue,orange,white};
   colors col;
   cout << "red:\t" << col <<"\twhite:\t" << col << endl;
   return -10;  
}

bool printName(string name){
  cout << name << endl;
  return true;
}


