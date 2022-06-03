#include <iostream>
#define N 10;
int a=10;
void show(){
     std::cout<<"Hello World"<<std::endl;
     std::cout<<"Snigdha Markanday";
     int a = 20;
     std::cout<<"Local Variable"<<a;
}
int main() {
  //Step 1
  std::cout<<"bool"<<sizeof(bool)<<std::endl;
  std::cout<<"char"<<sizeof(char)<<std::endl;
  std::cout<<"int"<<sizeof(int)<<std::endl;
  std::cout<<"float"<<sizeof(float)<<std::endl;
  std::cout<<"double"<<sizeof(double)<<std::endl;
  std::cout<<"long long int"<<sizeof(long long int)<<std::endl;
  //Step 2
  std::cout<<"Global Variable"<<a<<std::endl;
  show();
  //Step 3
  const int Sec_to_hr = 3600; // We cannot assign new values
  std::cout<<Sec_to_hr<<std::endl;
  std::cout<< N ;// Preprocessor //Macro
  
  return 0;
}
