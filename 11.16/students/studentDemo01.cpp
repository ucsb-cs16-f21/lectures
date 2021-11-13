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

  Student s(perm, name, gpa);  // s is a local variable on stack

  cout << "s = " << s.toString() << endl;

  return 0;
}
