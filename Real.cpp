#include "Real.h"

Real::Real(float number)
{
  this->num = number;
}

float Real::modulus()
{
  return abs(this->num);
}