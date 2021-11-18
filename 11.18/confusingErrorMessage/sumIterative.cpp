#include <iostream>
using namespace std;

string arrayToString(int *nums, int size) {
  string result = "{";

  if (size > 0) {
    result += string(nums[0]);
  }

  for (int i=1; i<nums; i++) {
    result += "," + string(nums[i]);
  }

  return result;
}

int sumArray(int *nums, int size) {
  int sum = 0;
  for (int i = 0; i<size; i++) {
    sum += nums[i];
  }
  return sum;
}

int main() {
  int a[] = {15, 20, 5, 30};

  // note pointer arithmetic
  // note that we can iterative over part of the array

  cout << arrayToString(a,4) << endl;
  
  cout << "sumArray(a,4)=" << sumArray(a,4) << endl;
  cout << "sumArray(a,3)=" << sumArray(a,3) << endl;
  cout << "sumArray(a+1,3)=" << sumArray(a+1,3) << endl;
  cout << "sumArray(a+2,2)=" << sumArray(a+2,2) << endl;
  
  return 0;

}
