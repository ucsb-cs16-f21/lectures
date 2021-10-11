#include <iostream>
using namespace std;

// https://www.cplusplus.com/reference/ios/fixed/

int main() {

  int i=42;
  double pi=3.14159;

  float a=0.10;
  float b=0.20;
  float c = a+b;

  cout << "a  = " << a << endl;
  cout << "b  = " << b << endl;
  cout << "c  = " << c << endl;
  cout << "i  = " << i << endl;
  cout << "pi = " << pi << endl;
  
  cout << fixed;

  cout << "a  = " << a << endl;
  cout << "b  = " << b << endl;
  cout << "c  = " << c << endl;
  cout << "i  = " << i << endl;
  cout << "pi = " << pi << endl;
  
  cout << scientific;

  cout << "a  = " << a << endl;
  cout << "b  = " << b << endl;
  cout << "c  = " << c << endl;
  cout << "i  = " << i << endl;
  cout << "pi = " << pi << endl;
  
  return 0;
}
