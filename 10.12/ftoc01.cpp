#include <iostream>
#include <cmath>

using namespace std;

double ftoc(double fTemp) {
  return ((fTemp - 32.0 ) / 9.0) * 5.0;
}

void expect_check(double expected, double actual) {
  if ( fabs(expected - actual)< 0.001) {
    cout << "PASSED" << endl;
  } else {
    cout << "  FAILED: I expected " << expected << " but I got: " << actual << endl;
  }
}



int main() {

  expect_check(100.0, ftoc(212.0));
  expect_check(0.0, ftoc(32.0));
  expect_check(20.0, ftoc(68.0));

  //double fTemp;
  //cout << "Please enter fahrenheit temp: ";
  //cin >> fTemp;

  //double cTemp = ftoc(fTemp);
  //cout << "In Celsius: " << cTemp << endl;
  return 0;
}
