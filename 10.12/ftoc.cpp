#include <iostream>
using namespace std;

double ftoc(double fTemp) {
  return ((fTemp - 32.0 ) / 9.0) * 5.0;
}

int main() {
  double fTemp;
  cout << "Please enter fahrenheit temp: ";
  cin >> fTemp;

  double cTemp = ftoc(fTemp);
  cout << "In Celsius: " << cTemp << endl;
  return 0;
}
