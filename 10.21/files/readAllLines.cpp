// readAllLines.cpp
// P. Conrad for CS16, Fall 2021
// Example program to read all lines from a file and count them

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  ifstream ifs; // the stream we will use for the input file
  string thisLine; // a line of input from the file

  int lineCount = 0;

  // Check to see if there is a command line argument
  // with the name of the file we are going to read.
  // We are expecting the user to type something like
  //  ./readAllLines input.txt
  // in which case argc (argument count) will be 2
  //   argv[0] will point to "./readAllLines
  //   argv[1] will point to "input.txt"

  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }

  // Now we know: argv[1] is the name of the input file
  // the thing that came after the name of the program
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
  
  getline(ifs,thisLine);
  while (  !ifs.eof() ) {
      // If we get here, it means we successfully read one line
      // So do something with thisLine

    cout << "I got [" << thisLine << "] from the file." << endl; 
    lineCount ++;

    getline(ifs,thisLine);
  }

  // If we get here, we reached the end of the file.
  // Print number of lines we read and the name of the file
  // we read them from (argv[1])

  cout << "There were " << lineCount << " lines in " << argv[1] << endl;

  return 0;
}
