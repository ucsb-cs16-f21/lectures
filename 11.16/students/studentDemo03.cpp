#include <iostream>
#include <fstream>
using namespace std;

#include "split.h"
#include "Student.h"
#include <vector>

void usage() {
  cerr << "Usage: ./studentDemo03 inputFile" << endl;
}

int main(int argc, char *argv[]) {

  if (argc != 2) {
    usage();
    exit(1);
  }

  string filename = string(argv[1]);

  std::ifstream file(filename);
  if (file.fail()) {
    cerr << "Could not open " << filename << endl;
  }

  vector<Student> students;
  
  std::string line;
  while (std::getline(file, line)) {
    vector<string> parts = split(line, ",");
    int perm    = stoi(parts[0]);
    string name = parts[1];
    double gpa  = stod(parts[2]);
    students.push_back(Student(perm, name, gpa));
  }

  file.close();

  for (int i=0; i<students.size(); i++) {
    cout << students[i].toString() << endl;
  }

  return 0;
}
