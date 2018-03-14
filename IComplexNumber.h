#ifndef IComplexNumberHeader
#define IComplexNumberHeader

class IComplexNumber
{
public:
  virtual float getRealPart(){return 0;}
  virtual float getImaginaryPart(){return 0;}
};

#endif