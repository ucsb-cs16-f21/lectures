#include <iostream>
using namespace std;


int main() {

  int a[5] = {9,2,4,19,3};

  cout << "a = " << a << endl;
  cout << "*a = " << *a << endl;
  cout << "a[0] = " << a[0] << endl;

  cout << "sizeof(int) = " << sizeof(int) << endl;

  int i = 42;
  int *p = &i;

  int j=98;
  int *s = &j;

  cout << "p=" << p << endl;
  cout << "*p=" << *p << endl;
  cout << "p[0]" << p[0] << endl;
  cout << "(p+1)=" << (p+1) << endl; 
  cout << "*(p+1)=" << *(p+1) << endl;

  return 0;
}
