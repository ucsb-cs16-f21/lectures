#include "Student.h"
#include <string>

using std::string;

// function definitions / method definitions

// Student:: means that the method belongs to the class Student
// :: "scope resolution operator".

Student::Student(int perm, string name, double gpa) {
  this->perm = perm;
  this->name = name;
  this->gpa = gpa;
}

// ANOTHER WAY TO WRITE IT

/* 
Student::Student(int perm, string name, double gpa) :
  perm(perm), name(name), gpa(gpa) {}
*/


int Student::getPerm() const { return this->perm;}
std::string Student::getName() const { return this->name; }
double Student::getGpa() const { return this->gpa; }

void Student::setPerm(int perm) { this->perm = perm; }
void Student::setName(string name) { this->name = name; }
void Student::setGpa(double gpa) { this->gpa = gpa; }

string Student::toString() const {
  return "[" +
    std::to_string(this->perm) + ", " +
    this->name + ", " +
    std::to_string(this->gpa) + "]";
}

