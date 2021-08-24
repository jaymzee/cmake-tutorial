cmake Tutorial
https://cmake.org/cmake/help/latest/guide/tutorial

```
mkdir build
cd build
cmake ..
cmake --build .
```

CMake honors the environment variables CC and CXX upon detecting the
C and C++ compiler to use.

or override with:
```
cmake
    -D CMAKE_C_COMPILER=clang
    -D CMAKE_CXX_COMPILER=clang++
    -D CMAKE_CXX_FLAGS=-stdlib=libc++
    -D CMAKE_EXE_LINKER_FLAGS=-stdlib=libc++
    -D CMAKE_BUILD_TYPE=Release
```
