#include "MathFunctions.h"
#include "TutorialConfig.h"
#include <math.h>

// Square root
double mysqrt(double x)
{
  if (x <= 0) {
    return 0;
  }

  return sqrt(x);
}
