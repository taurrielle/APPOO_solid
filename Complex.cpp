#include "Complex.h"

Complex::Complex(float real, float imaginary)
{
  this->re = real;
  this->im = imaginary;
}

float Complex::modulus()
{
	float mod = sqrt(pow(this->re, 2) + pow(this->im, 2));
  return mod;
}

float Complex::getRealPart()
{
  return this->re;
}

float Complex::getImaginaryPart()
{
  return this->im;
}
