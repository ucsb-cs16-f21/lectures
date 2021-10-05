#include <iostream>
using namespace std;

int main() {
  int numbers[5]={2,3,5,7,11};

  for (int i=0; i<5; i++) {
    cout << "i[" << i << "]=" << numbers[i] << endl;
  }

  return 0;
}
