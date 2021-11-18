#include <iostream>
using std::cout;
using std::endl;
using std::string;

string arrayToString(int *nums, int size) {
  string result = "{";

  if (size > 0) {
    result += std::to_string(nums[0]);
  }

  for (int i=1; i<size; i++) {
    result += "," + std::to_string(nums[i]);
  }

  result += "}";
  return result;
}

int sumArray(int *nums, int size) {
  if (size==0)
    return 0;
  else
    return nums[0] + sumArray(nums + 1, size -1);
}

int main() {
  int a[] = {15, 20, 5, 30};

  // note pointer arithmetic
  // note that we can iterative over part of the array

  cout << "a=" << arrayToString(a,4) << endl;
  
  cout << "sumArray(a,4)=" << sumArray(a,4) << endl;
  cout << "sumArray(a,3)=" << sumArray(a,3) << endl;
  cout << "sumArray(a+1,3)=" << sumArray(a+1,3) << endl;
  cout << "sumArray(a+2,2)=" << sumArray(a+2,2) << endl;
  
  return 0;

}
