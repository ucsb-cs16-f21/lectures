#include <iostream>
using namespace std;
#include <cstdlib> // for exit()
#include <string>  // std::string, std::stod


#include "tempFuncs.h"

void usage() {
    cerr << "Usage: ./demo temp scale" << endl
         << "  where temp is a temperature (numeric) " << endl
	 << "  and scale is either F or C "
	 << "Example: ./demo 68 F will output 20 C" << endl;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    usage();
    exit(1);
  }

  double input_temperature = stod(string(argv[1]), NULL); // convert string to double
  string scale = string(argv[2]);

  if (scale == "F" || scale == "f") {
    cout << fToC(input_temperature) << " C" << endl;
  } else if (scale =="C" || scale=="c") {
    cout << cToF(input_temperature) << " F" << endl;
  } else {
    usage();
    exit(2);
  }

  return 0;
}
