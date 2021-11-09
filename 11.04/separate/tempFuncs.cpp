#include "tempFuncs.h"

double fToC(double fTemp) {
  return (fTemp - 32.0) / 9.0 * 5.0;
}

double cToF(double cTemp) {
  return (cTemp / 5.0 * 9.0) + 32.0;
}

