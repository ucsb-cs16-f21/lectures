// strings and c-strings
// From: https://www.cplusplus.com/reference/string/string/c_str/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "split.h"

int main ()
{
  std::string str ("1234567,Chris Gaucho,3.67");

  vector<string> parts = split(str,",");

  for (int i=0; i<parts.size(); i++) {
    cout << "parts[" << i << "]=" << parts[i] << endl;
  }
  
  return 0;
}
