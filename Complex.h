#ifndef ComplexHeader
#define ComplexHeader

#include "NumberInterface.h"
#include "IComplexNumber.h"

#include <iostream>
using namespace std;
#include <cmath>

class Complex: public NumberInterface, public IComplexNumber
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