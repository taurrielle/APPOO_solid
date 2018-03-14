#ifndef RealHeader
#define RealHeader

#include "NumberInterface.h"

#include <iostream>
using namespace std;
#include <cmath>

class Real: public NumberInterface
{
  float num;

public:
  Real(float number);

  float modulus();
  float getRealPart();
  float getImaginaryPart();

  void output();
};

#endif