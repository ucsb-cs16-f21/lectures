// strings and c-strings
// From: https://www.cplusplus.com/reference/string/string/c_str/

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main ()
{
  std::string str ("Please split this sentence into tokens");

  // allocate space on the heap for a C-String that can hold the C++ string
  
  char * cstr = new char [str.length()+1]; // borrow space from heap
  std::strcpy (cstr, str.c_str()); // copy c-string into our c-string

  // cstr now contains a c-string copy of str

  std::vector<string> parts;
  
  char * p = std::strtok (cstr," ");
  while (p!=0)
  {
    std::cout << p << '\n';
    parts.push_back(string(p));
    p = std::strtok(NULL," ");
  }

  delete[] cstr; // return space to the heap

  for (int i=0; i<parts.size(); i++) {
    cout << "parts[" << i << "]=" << parts[i] << endl;
  }
  
  return 0;
}
