#ifndef NODE_H
#define NODE_H

// general pattern for a linked list node
// "int data" is standing in for whatever
// our data might be.

struct Node {
  int data;
  Node * next;
};

// EXAMPLES of concrete linked list nodes

/*
struct Student {
  int perm;
  string name;
  double gpa;
  Student * next;
};
*/

#endif // NODE_H

