#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using std::string;

class Student {
 public:
  // function prototypes aka function declarations
  Student(int perm, string name, double gpa);
  int getPerm() const;
  string getName() const;
  double getGpa() const;
  void setPerm(int perm);
  void setName(string name);
  void setGpa(double gpa);
  string toString() const;

 private:
  int perm;
  string name;
  double gpa;
};


#endif // STUDENT_H
