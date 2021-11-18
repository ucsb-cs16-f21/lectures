#include <iostream>
#include <vector>
using namespace std;

// print from start to end; end should be one greater than place where we stop
// e.g. [foo, bar, fum], to get foo, bar and fum to print, we'd
// call printVertical(0,3)
// prints in a horizontal column like this:
//
// foo bar fum

void printHorizontal(vector<string> v, int start, int end) {
  if (end - start <= 0) {
    cout << endl;
    return;
  }

  cout << v[start] << " ";
  printHorizontal(v, start + 1, end);
}


void printMystery(vector<string> v, int start, int end) {
  if (end - start <= 0) {
    return;
  }

  printMystery(v, start + 1, end);
  cout << v[start] << " ";

}


int main(int argc, char * argv[]) {
  
  vector<string> words;
  
  // load words on command line into words
  // start at 1 so we skip the program name
  for (int i=1; i<argc; i++) {
    words.push_back(string(argv[i]));
  }

  cout << "printHorizontal(words, 0, words.size()); " << endl;
  printHorizontal(words, 0, words.size());

  cout << "printMystery(words, 0, words.size()); " << endl;  
  printMystery(words, 0, words.size());
  cout << endl;
  return 0;
}
