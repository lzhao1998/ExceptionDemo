#include "typeexception.h"
#include "CException.h"
#include "Exception.h"
#include <stdio.h>


#define RADIUS_IS_ZERO 1
#define RADIUS_IS_NEG  2
void validateRadius(float v)
{
  if(v == 0.0)
    Throw(createException("Radius cannot be zero",RADIUS_IS_ZERO)); 
  else if( v < 0.0)
    Throw(createException("Radius cannot be negatif",RADIUS_IS_NEG));
  return v;
}

void tryException(float r)
{
  CEXCEPTION_T ex;
  float total;
  Try
  {
    validateRadius(r);
    total = r*3.14*2;
    printf("The area of the circle with %f meters radius is %f\n", r, total);
  } 
  Catch(ex)
  {
    dumpException(ex);
  }
}