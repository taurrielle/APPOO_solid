#include "NumberOutputter.h"

void NumberOutputter::outputReal(Real& real_num)
{
  cout << real_num.num;
}

void NumberOutputter::outputComplex(Complex& complex_num)
{
  if (complex_num.im < 0)
  {
    cout << complex_num.re << "-" << abs(complex_num.im) << "i";
  }
  else
  {
    cout << complex_num.re << "+" << complex_num.im << "i";
  }
}