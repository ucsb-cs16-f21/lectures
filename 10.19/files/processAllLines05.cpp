// processAllLines03.cpp
// P. Conrad for CS16, Fall 2021
// Example program to read all lines from a file and process them

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream
#include <iomanip> // for setw
#include <cstring> // for strtok

using namespace std;


void processLine(string thisLine, int &ucsbCount) {
  // if the line contains UCSB, increment ucsb count by one.
  // Note that it will only increment by one, even if UCSB occurs more than once on the line.
  
  int pos = thisLine.find("UCSB");
  if (pos != string::npos)
    ucsbCount ++;
}


int main(int argc, char *argv[])
{

  if (argc!=2) {
   cerr << "Usage: "<< argv[0] << " inputFile" << endl;
   exit(1);
  }

  ifstream ifs; // the stream we will use for the input file
  string thisLine; // a line of input from the file

  int ucsbCount = 0;
  
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
    processLine(thisLine, ucsbCount);
    getline(ifs,thisLine);
  }

  // If we get here, we reached the end of the file.
  // Print number of lines we read and the name of the file
  // we read them from (argv[1])

  cout << "There were " << ucsbCount << " lines in " << argv[1] << " containing UCSB" << endl;

  return 0;
}
