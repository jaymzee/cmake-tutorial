#include <cmath>
#include "mysqrt.h"

namespace cmake {

double my::mysqrt (double x)
{
#if defined(HAVE_LOG) && defined(HAVE_EXP)
    double result = exp(log(x) * 0.5);
#else
    double result = x;
#endif
    return result;
}

}
