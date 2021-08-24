cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the MathFunctions library
add_subdirectory(MathFunctions)

# add the executable
add_executable(Tutorial tutorial.cxx)
target_link_libraries(Tutorial PUBLIC MathFunctions)

# includes
target_include_directories(Tutorial PUBLIC
                           ${PROJECT_BINARY_DIR}
                           "${PROJECT_SOURCE_DIR}/MathFunctions"
                          )

configure_file(TutorialConfig.h.in TutorialConfig.h)
