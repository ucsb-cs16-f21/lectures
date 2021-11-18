#include <iostream>
using namespace std;


string starline(int length) {

  if (length <= 0)
    return "";

  // no else needed because return on the if ends the function call
  
  return "*" + starline(length - 1);
}


int main() {
  cout << "starline(0)=" << starline(0) << endl;
  cout << "starline(1)=" << starline(1) << endl;
  cout << "starline(4)=" << starline(4) << endl;
  cout << "starline(7)=" << starline(7) << endl;
  
}
