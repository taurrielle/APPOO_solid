#include "Real.h"
#include "Complex.h"
#include "NumberOutputter.h"

int main()
{
	float realNumber, realPart, imaginaryPart;

	cout << "Enter a real number: ";
	cin >> realNumber;
	Real real(realNumber);

  cout << "You entered: ";
  NumberOutputter real_num;
  real_num.outputReal(real);
  cout << endl;

	cout << "Absolute value = " << real.modulus() << "\n" << endl;


	cout << "Enter a complex number: ";
	cin >> realPart >> imaginaryPart;
	cin.ignore();
	Complex comp(realPart, imaginaryPart);

	cout << "You entered: ";
  NumberOutputter complex_num;
  complex_num.outputComplex(comp);
  cout << endl;

	cout << "Absolute value = " << comp.modulus() << endl;
	cout << "Re = " << comp.getRealPart() << endl;
	cout << "Im = " << comp.getImaginaryPart() << endl;

	return 0;
}
