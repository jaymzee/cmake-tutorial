#include <iostream>
#include <cstdlib>
#include <cmath>
#include "TutorialConfig.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << " compiled with "
                  << CXX_COMPILER_ID << " " << CXX_COMPILER_VERSION << "\n";
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 2;
    }
    double inputValue = atof(argv[1]);
    double outputValue = sqrt(inputValue);
    std::cout << "The square root of "
              << inputValue << " is " << outputValue << "\n";
    return 0;
}
