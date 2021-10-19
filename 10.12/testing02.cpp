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

string centered(string s, int length){

  int total_spaces = length - s.length();
  int spaces_before = total_spaces / 2;
  int spaces_after = total_spaces / 2; 

  if (total_spaces % 2 == 1 )
    spaces_after += 1;

  return n_spaces(spaces_before) + s + n_spaces(spaces_after);
}


int main() {
   expect_check("",n_spaces(0));
   expect_check(" ",n_spaces(1));
   expect_check("     ",n_spaces(5));

   expect_check("  Phill  ", centered("Phill",9));
   expect_check(" Conrad " , centered("Conrad",8));
   expect_check(" * ",       centered("*",3));
   expect_check(" *  ",      centered("*",4)); 
   expect_check(" ** ",      centered("**",4));
   expect_check(" **  ",     centered("**",5));

   return 0;
}
