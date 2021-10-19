#include <iostream>
using namespace std;

int main() {

  int w = 23;
  long int x = 0x7ffd57f6937c;
  int y = 96;
  long int* a = &x; // Read this as "int star a" or "pointer to int a"
  int* b = &y; // Read this as "int star b" or "pointer to int b"
  
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  cout << "sizeof x = " << sizeof x << endl;
  cout << "sizeof y = " << sizeof y << endl;
  cout << "sizeof a = " << sizeof a << endl;
  cout << "sizeof b = " << sizeof b << endl;
  
  cout << "&w = " << &w << endl;
  cout << "&x = " << &x << endl;
  cout << "&y = " << &y << endl;
  cout << "&a = " << &a << endl;
  cout << "&b = " << &b << endl;

  cout << "*x = " << *((int *) x) << endl;   /* syntax error */
  cout << "*a = " << *a << endl;
  
  return 0;
}
