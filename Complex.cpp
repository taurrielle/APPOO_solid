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

void Complex::output()
{
	if (this->im < 0)
  {
    cout << this->re << "-" << abs(this->im) << "i";
  }
  else
  {
    cout << this->re << "+" << this->im << "i" 	;
  }
}

