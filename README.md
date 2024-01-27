# BALL-E
A WIP C++ library for decomposing an arbitrary function on a sphere into spherical harmonics.

### Setup

Needs GCC Version 10 or greater.

#### Linux

Packages: `build-essential g++-13` # or any version >= 10

#### Mac

```
xcode-select --install # and also insteall brew: https://docs.brew.sh/Installation
brew install gcc
ls $(brew --prefix gcc)/bin/g++* # pick a version >= 10 and use the full path when compiling
```

### Compiling

```
mkdir build
g++-10 -std=c++20 -c source/spherical_fit.cpp -o build/spherical_fit.o
g++-10 -std=c++20 build/spherical_fit.o source/spherical_fit.hpp source/main.cpp -o build/main
```
