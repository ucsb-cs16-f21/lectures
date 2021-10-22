#include <iostream>
using namespace std;

void printArray(int nums[], int size) {
  for (int i=0; i<size; i++) {
    cout << "nums[" << i << "]=" << nums[i] << endl;			     
  }
}


void printArray2(int *nums, int size) {
  for (int i=0; i<size; i++) {
    cout << "nums[" << i << "]=" << nums[i] << endl;			     
  }
}

int main() {

  int a[5] = {9,2,4,19,3};

  cout << "a = " << a << endl;
  cout << "*a = " << *a << endl;
  cout << "a[0] = " << a[0] << endl;

  cout << "sizeof(int) = " << sizeof(int) << endl;

  cout << "(a+1)=" << (a+1) << endl;
  cout << "*(a+1)=" << *(a+1) << endl;
  cout << "a[1]=" << a[1] << endl;

  int b[4]={4,7};
  int c[8]={323,101,512,654,678,234,890,234};

  cout << "printArray(a,5)" << endl;
  printArray(a,5);
  cout << endl;
  
  cout << "printArray(a,4)" << endl;
  printArray(a,4);
  cout << endl;

  cout << "printArray2(a,5)" << endl;
  printArray2(a,5);
  cout << endl;
  
  cout << "printArray(c,20)" << endl;
  printArray(c,20);

  return 0;
}
