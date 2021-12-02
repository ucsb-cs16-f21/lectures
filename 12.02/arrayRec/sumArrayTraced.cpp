#include <iostream>
#include <cstdlib> // for exit()
#include <sstream> // for ostringstream
using namespace std;


string sumArrayTrace(int *nums, int size) {
  ostringstream oss;
  oss <<  "sumArray(" << nums << "," << size << ")";
  return oss.str();
}

int sumArray(int *nums, int size) {
  cout << "Calling " << sumArrayTrace(nums, size) << endl;
  if (size<=0) {
    cout << "Returning 0 from " << sumArrayTrace(nums, size) << endl;
    return 0;
  }
  else {
    int sum = nums[0] + sumArray(nums+1, size-1); 
    cout << "Returning sum=" << sum
	 << " from " << sumArrayTrace(nums, size) << endl;
    return sum;
  }
}

int main() {

  int nums[]={30, 40, 10};

  cout << "nums=" << nums << endl;

  int sum = sumArray(nums, 3);
  
  cout << "sum=" << sum << endl;

  return 0;
}
