#include <iostream>
#include <cstdlib> // for exit()
using namespace std;


int * argvToArray(int argc, char *argv[]) {
  
  if (argc <= 1) {
    cerr << "Error: argvToArray expects argc >= 1" << endl;
    exit(1); // 
  }
  
  // allocate an array on the heap
  // one fewer than argc, since argv[0] doesn't count
  
  int * result = new int[argc - 1];
  
  // Store argv[1] to argv[argc-1] in result[0] to result[argc-2]
  for (int i=1; i<argc; i++) {
    result[i-1]=atoi(argv[i]); 
  }
  
  return result;  
}

void usage() {
  cerr << "Usage: ./sumArray num1 num2 num2 ... numN" << endl;
}


int sumArray(int *nums, int size) {
  if (size<=0)
    return 0;
  else
    return nums[0] + sumArray(nums+1, size-1);
}

struct Test {
  double y; 
  int x;
};

int main(int argc, char *argv[]) {

  Test *t = new Test;

  if (argc <= 1) {
    usage();
    exit(2);
  }

  int * nums = argvToArray(argc, argv);
  int size = argc-1;

  int sum = sumArray(nums, size);
  cout << "sum=" << sum << endl;

   delete [] nums; // IF WE OMIT THIS, MEMORY LEAK!

  // delete t;

  return 0;
}
