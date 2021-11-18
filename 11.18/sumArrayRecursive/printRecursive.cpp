#include <iostream>
using std::cout;
using std::endl;
using std::string;

// this produces the part that is num1,num2,num3 without the {}
string arrayToStringHelper(int *nums, int size) {
  if (size == 0) {
    return "";
  } else if (size == 1) {
    return std::to_string(nums[0]);
  } else {
    return std::to_string(nums[0]) +
      "," +
      arrayToStringHelper(nums + 1, size - 1);
  }
}

string arrayToString(int *nums, int size) {
  return "{" + arrayToStringHelper(nums, size) + "}";
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
