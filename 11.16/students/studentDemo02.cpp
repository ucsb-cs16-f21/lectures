#include <iostream>
using namespace std;

#include "Student.h"


void usage() {
  cerr << "Usage: ./studentDemo01 perm name gpa" << endl;
}

int main(int argc, char *argv[]) {

  if (argc != 4) {
    usage();
    exit(1);
  }

  int perm = atoi(argv[1]);
  string name = string(argv[2]);
  double gpa = stod(string(argv[3]));


  // s is a local variable on stack, a pointer
  // after the next line of code, it points to a student object on the heap
  Student *s = new Student(perm, name, gpa);  

  cout << "s = " << s->toString() << endl;  // use -> since s is a pointer

  delete s; // We're done with the storage, so return it to the heap

  // Strictly speaking, ending the program frees all heap storage.
  // But as a habit, when you write "new" in C++, you need to think about
  // where the matching delete occurs.   
  
  return 0;
}
