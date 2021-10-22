#include <iostream>
using namespace std;


// Let's suppose this is an exam question
//
//
//


int sumOfArray(int nums[], int size) {
  int sum;

  sum = 0;

  for (int i=0; i<size; i++ ) {
  
     sum += nums[i];
  }

  return sum;
}

int main() {

  // Question: make an array containing 5 2 digit numbers.
  // Then use the funciton sumOfArray to calculate and print the sum
  
  int nums[5] = {34, 67, 21, 89, 82};

  cout << sumOfArray(nums,5) << endl;

  return 0;
}
