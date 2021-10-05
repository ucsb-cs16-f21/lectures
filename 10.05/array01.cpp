#include <iostream>
using namespace std;

int main() {
  int numbers[6]={2,3,5,7,11,13};

  for (int i=0; i<5; i++) {
    cout << "i[" << i << "]=" << numbers[i] << endl;
  }

  return 0;
}
