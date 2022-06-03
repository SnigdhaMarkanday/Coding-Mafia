#include <iostream>
using namespace std;
int main() {
  int a=5,b=2;
  //Step1
  cout<<"Sum"<<(a+b)<<endl;
  cout<<"Difference"<<(a-b)<<endl;
  cout<<"Product"<<(a*b)<<endl;
  cout<<"Quotient"<<(a/b)<<endl;
  cout<<"Remainder"<<a%b<<endl;
  a++;
  cout<<"After Increment"<<a<<endl;
  a--;
  cout<<"After Decrement"<<a<<endl;
  //Pre Increment
  int d=++a;
  cout<<"Pre Increment"<<d<<endl;
  int e=--a;
  cout<<"Pre Decrement"<<e<<endl;
  //Step2
  bool check=(a==17);
  cout<<check;
  return 0;
}
