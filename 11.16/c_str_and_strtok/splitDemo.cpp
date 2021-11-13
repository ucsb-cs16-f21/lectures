// strings and c-strings
// From: https://www.cplusplus.com/reference/string/string/c_str/

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string str, string delimiter) {
  
  char * cstr = new char [str.length()+1]; // borrow space from heap
  std::strcpy (cstr, str.c_str()); // copy c-string into our c-string

  // cstr now contains a c-string copy of str

  std::vector<string> parts;
  
  char * p = std::strtok (cstr, delimiter.c_str() );
  while (p!=NULL) {
    parts.push_back(string(p));
    p = std::strtok(NULL,delimiter.c_str());
  }

  delete[] cstr; // return space to the heap

  return parts;
}


int main ()
{
  std::string str ("Please split this sentence into tokens");

  vector<string> parts = split(str," ");

  for (int i=0; i<parts.size(); i++) {
    cout << "parts[" << i << "]=" << parts[i] << endl;
  }
  
  return 0;
}
