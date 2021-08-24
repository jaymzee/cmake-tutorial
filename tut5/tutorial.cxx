#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "mysqrt.h"
#endif

int main(int argc, char *argv[])
{
    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << " compiled with "
                  << CXX_COMPILER_ID << " " << CXX_COMPILER_VERSION << "\n";
#ifdef USE_MYMATH
        std::cout << "BUILD OPTIONS: " << "USE_MYMATH ";
        cmake::my::features();
#endif
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 2;
    }
    double inputValue = std::strtod(argv[1], nullptr);
#ifdef USE_MYMATH
    double outputValue = cmake::my::mysqrt(inputValue);
#else
    double outputValue = sqrt(inputValue);
#endif
    std::cout << "The square root of "
              << inputValue << " is " << outputValue << "\n";
    return 0;
}
