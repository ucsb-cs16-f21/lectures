#include <iostream>
using namespace std;
#include <cstdlib> // for exit()
#include <string>  // std::string, std::stod
#include <fstream> // for input and output files

#include "tempFuncs.h"

void usage() {
    cerr << "Usage: ./demo2 inputFile scale outputFile " << endl
         << "  converts all temperatures in input file from scale given (f or c)" << endl
         << "  to the other scale and writes them to outputFile" << endl;
}

ifstream openInputFile(string filename) {
  ifstream inFS;
  
  inFS.open(filename);
  if (!inFS.is_open()) {
    cerr << "Could not open input file " << filename << endl;
    usage();
    exit(2);
   }
  return inFS;
}

ofstream openOutputFile(string filename) {
  ofstream outFS;
  
  outFS.open(filename);
  if (!outFS.is_open()) {
    cerr << "Could not open output file " << filename << endl;
    usage();
    exit(3);
   }
  return outFS;
}


double outputTemperature(double inputTemp, string scale) {
 if (scale == "F" || scale == "f") {
   return fToC(inputTemp);
 }

 if (scale =="C" || scale=="c") {
   return cToF(inputTemp);
 }
 cerr << "ERROR: Unknown scale: " << scale << endl;
 usage();
 exit(3);
}


int main(int argc, char *argv[]) {
  if (argc != 4) {
    usage();
    exit(1);
  }
  
  string inputFile  = string(argv[1]);
  string scale      = string(argv[2]);
  string outputFile = string(argv[3]);

  ifstream inFS  = openInputFile(inputFile);
  ofstream outFS = openOutputFile(outputFile);

  double inputTemp;
  
  while (!inFS.eof()) {
      inFS >> inputTemp;
      if (!inFS.fail()) {
	outFS << outputTemperature(inputTemp, scale) << endl; 
      }
   }
  inFS.close();
  outFS.close();
  
  return 0;
}
