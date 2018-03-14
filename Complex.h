#ifndef ComplexHeader
#define ComplexHeader

#include "NumberInterface.h"

#include <iostream>
using namespace std;
#include <cmath>

class Complex: public NumberInterface
{
  friend class NumberOutputter;
private:
  float re;
  float im;
public:
  Complex(float real, float imaginary);

  float modulus();
  float getRealPart();
  float getImaginaryPart();
};

#endif