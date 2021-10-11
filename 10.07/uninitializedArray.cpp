#include <iostream>
using namespace std;

int sumArray(int a[], int size) {
  int sum=0;
  for (int i=0; i<size; i++) {
    sum += a[i];
  }
  return sum;
}


int main() {

  int strongbad[100];

  int good[100]={1,2,3,5,10};

  int bad[100];

  cout << "sumArray(good)=" << sumArray(good,100) << endl;
  cout << "sumArray(bad)="<< sumArray(bad,100) << endl;
  cout << "sumArray(good,3)="<< sumArray(good,3) << endl;
  cout << "sumArray(good,4)="<< sumArray(good,4) << endl;
  cout << "sumArray(strongbad)" << sumArray(strongbad,100) << endl;
  cout << "sumArray(good,101)" << sumArray(good,101) << endl;
  cout << "sumArray(good,1001)" << sumArray(good,1001) << endl;
  cout << "sumArray(good,10000000)" << sumArray(good,10000000) << endl;
  return 0;
}
