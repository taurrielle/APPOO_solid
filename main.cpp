#include "Real.h"
#include "Complex.h"

int main()
{
	float realNumber, realPart, imaginaryPart;

	cout << "Enter a real number: ";
	cin >> realNumber;
	Real real(realNumber);

  cout << "You entered: ";
  real.output();
  cout << endl;

	cout << "Abs value = " << real.modulus() << "\n" << endl;


	cout << "Enter a complex number: ";
	cin >> realPart >> imaginaryPart;
	cin.ignore();
	Complex comp(realPart, imaginaryPart);

	cout << "You entered: ";
  comp.output();
  cout << endl;

	cout << "Abs value = " << comp.modulus() << endl;
	cout << "Real part = " << comp.getRealPart() << endl;
	cout << "Imaginary part = " << comp.getImaginaryPart() << endl;

	return 0;
}
