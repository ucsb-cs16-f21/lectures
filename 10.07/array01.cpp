#include <iostream>
using namespace std;

int main() {
  int numbers[6]={2,3,5,7,11,13};

  for (int i=0; i<5; i++) {
    cout << "i[" << i << "]=" << numbers[i] << endl;
  }

  int more_nums[]={10,11,13,3,4};
  
  for (int i=0; i<5; i++) {
    cout << "i[" << i << "]=" << more_nums[i] << endl;
  }  

  int sum = 0 ; // fix this

  for (int i=0; i<5; i++) {
    sum = sum + more_nums[i];
  }

  cout << "sum = " << sum << endl;
  return 0;
}
