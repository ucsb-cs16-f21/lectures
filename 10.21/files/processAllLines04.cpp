// processAllLines03.cpp
// P. Conrad for CS16, Fall 2021
// Example program to read all lines from a file and process them

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream
#include <iomanip> // for setw
#include <cstring> // for strtok

using namespace std;


int countWords(string thisLine) {
  // Returns first token if any, splitting on " "
  int count = 0;

  char * thisLineAsCString = new char[thisLine.length() + 1];
  strcpy(thisLineAsCString, thisLine.c_str());
  char *token = strtok(thisLineAsCString, " "); // .c_str converts to c-string
   
  // As long as we didn't run out of tokens, keep counting
  while (token != NULL)   {
    count ++;
    token = strtok(NULL, " "); // NULL means "continue using the same string"
  }
  return count;
}


void processLine(string thisLine, int &lineCount, int &wordCount, int &charCount) {
  int length = thisLine.size() + 1; // add one to account for \n
  cout << setw(4) << length << setw(0) <<  " " << thisLine << endl;
  lineCount ++;
  charCount += length;
  wordCount += countWords(thisLine);
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
  int charCount = 0;
  int wordCount = 0;
  
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
    processLine(thisLine, lineCount, wordCount, charCount);
    getline(ifs,thisLine);
  }

  // If we get here, we reached the end of the file.
  // Print number of lines we read and the name of the file
  // we read them from (argv[1])

  cout << "There were " << lineCount << " lines in " << argv[1] << endl;
  cout << "There were " << wordCount << " words in " << argv[1] << endl;
  cout << "There were " << charCount << " chars in " << argv[1] << endl;

  return 0;
}
