#include <iostream>
using namespace std;

string n_spaces(int length) {
  string result="";
  for (int i=0; i<length; i++) {
    result += " ";
  }
  return result;
}

void expect_check(string expected, string actual) {
  if (expected == actual) {
    cout << "PASSED" << endl;
  } else {
    cout << "  FAILED! expected: [" << expected << "] but got [" << actual <<"]" << endl;
  }
}

int main() {
   expect_check("",n_spaces(0));
   expect_check(" ",n_spaces(1));
   expect_check("     ",n_spaces(5));
   return 0;
}
