#include <iostream>
using namespace std;

int main() {

  // a for loop in C/C++ can be considered
  // syntatic sugar for a while loop

  for (int i=0; i<10; i+=2) {
    cout << "i=" << i << endl;
  }
  return 0;
}
