#include "Roster.h"
#include "Student.h"

#include <iostream>
using namespace std;

void printStudent(Student s) {
   cout << "[" << s.name << "," << s.gpa << "," << s.perm << "]";
}


int main() {
  
  Roster r;
  Student s;

  s.name = "Chris Gaucho";
  s.gpa= 3.67;
  s.perm = 1234567;

  printStudent(s);

  return 0;
}
