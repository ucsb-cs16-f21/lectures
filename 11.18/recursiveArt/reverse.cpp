#include <iostream>
using namespace std;

string reverse(string s) {

  int length = s.length();
  if (length <= 0)
    return "";

  // s.back is the last character of a string

  string all_but_last = s.substr(0, length-1); // all but the last character
  string last = s.substr(length - 1, 1); // last character
  
  // string last = s.back(); // another possible implementation
  
  return last  + reverse(all_but_last);
}


int main() {
  cout << "reverse(\"UCSB\")=" << reverse("UCSB") << endl;
  cout << "reverse(\"Santa Barbara\")=" << reverse("Santa Barbara") << endl;
  cout << "reverse(\"Isla Vista\")=" << reverse("Isla Vista") << endl;
  cout << "reverse(\"\")=" << reverse("") << endl;
  cout << "reverse(\"x\")=" << reverse("x") << endl;
  return 0;
}
