#ifndef NumberInterfaceHeader
#define NumberInterfaceHeader

class NumberInterface
{
public:
	virtual float modulus(){return 0;}
	virtual float getRealPart(){return 0;}
	virtual float getImaginaryPart(){return 0;}
};

#endif