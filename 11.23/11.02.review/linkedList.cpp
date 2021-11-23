#include <iostream>
using namespace std;

struct Univ {
  string name;
  Univ * next;
};


// COMPARE:
//  for (int i=0; i<n; i++)
//  for (Univ *p = head; p!=NULL; p=p->next)

void printList(Univ *head) {
  for (Univ *p = head; p!=NULL; p = p->next) {
    cout << p->name << endl;
  }
}

int main() {
  Univ * head; // pointer to start of linked list
  Univ * p; // scratch, temporary pointer
  p = new Univ; // allocates a new Univ node from heap.
  head = p;
  (*p).name = "UCSB";
  (*p).next = NULL;


  printList(head);

  // insert UCLA in front of UCSB (because alphabet)
  p = new Univ;
  p->name = "UCLA";
  p->next = head;
  head=p;

  cout << "==== after inserting UCLA ====" << endl;
  printList(head);

  // insert UCR
  
  p = new Univ;
  p->name = "UCR";
  p->next = head -> next;
  head->next = p;


  cout << "==== after inserting UCR ====" << endl;
  printList(head);


  return 0;
}
