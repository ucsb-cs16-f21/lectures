#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double a = 0.10;
  double b = 0.20;
  double c = a + b;

  if (c == 0.3) {
    cout << "GOOD" << endl;
  } else {
    cout << "WTH?" << endl;
  }


  cout << setprecision(20);
  cout << "c = " << c << endl;


  return 0;
}
