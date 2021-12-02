#include <iostream>
#include <cstdlib> // for exit()
using namespace std;


int sumArray(int *nums, int size) {
  if (size<=0)
    return 0;
  else
    return nums[0] + sumArray(nums+1, size-1);
}

int main() {

  int nums[]={30, 40, 10};

  cout << "nums=" << nums << endl;

  int sum = sumArray(nums, 3);
  
  cout << "sum=" << sum << endl;

  return 0;
}
