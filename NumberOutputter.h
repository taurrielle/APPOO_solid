#ifndef NumberOutputterHeader
#define NumberOutputterHeader

#include "Real.h"
#include "Complex.h"

class NumberOutputter
{
public:
  void outputReal(Real& real_num);
  void outputComplex(Complex& complex_num);
};

#endif