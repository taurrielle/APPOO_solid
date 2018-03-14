#ifndef RealHeader
#define RealHeader

#include "NumberInterface.h"

#include <iostream>
using namespace std;
#include <cmath>

class Real: public NumberInterface
{
  friend class NumberOutputter;
private:
  float num;

public:
  Real(float number);

  float modulus();
};

#endif