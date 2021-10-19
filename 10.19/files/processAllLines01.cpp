// processAllLines01.cpp
// P. Conrad for CS16, Fall 2021
// Example program to read all lines from a file and process them

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;


void processLine(string thisLine, int &lineCount) {
   cout << "I got [" << thisLine << "] from the file." << endl; 
   lineCount ++;
}

int main(int argc, char *argv[])
{

  if (argc!=2) {
   cerr << "Usage: "<< argv[0] << " inputFile" << endl;
   exit(1);
  }

  ifstream ifs; // the stream we will use for the input file
  string thisLine; // a line of input from the file

  int lineCount = 0;
  
  // Now we know: argv[1] is the name of the input file
  // So open that file as our "input file stream" or "ifs"

  ifs.open(argv[1]);
  
  // if that failed, print an error and exit:
  if (ifs.fail()) {
    cerr << "Could not open file:" << argv[1] << endl;
    exit(2); 
  }
  
  // If we got here, it didn't fail!  
  // Now read the rest of the lines
  // Start by trying to read the first line
  // .eof() isn't true until you TRY to read and HIT the end of file
  
  getline(ifs,thisLine);
  while (  !ifs.eof() ) {
    processLine(thisLine, lineCount);
    getline(ifs,thisLine);
  }

  // If we get here, we reached the end of the file.
  // Print number of lines we read and the name of the file
  // we read them from (argv[1])

  cout << "There were " << lineCount << " lines in " << argv[1] << endl;

  return 0;
}
