# BALL-E
A C++ library for decomposing an arbitrary function on a sphere into spherical harmonics.

### Compiling

Needs GCC Version 10 or greater.

```
mkdir build
g++-10 -std=c++20 -c source/spherical_fit.cpp -o build/spherical_fit.so
g++-10 -std=c++20 build/spherical_fit.so source/spherical_fit.hpp source/main.cpp -o build/main
```
