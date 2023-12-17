#include <iostream>
#include "spherical_fit.hpp"


int main() {
    int l = 3;
    int m = 0;
    double theta = 1.2345;
    double phi = 0;

    std::cout << "Y_{" << l << "," << m << "}(" << theta << "," << phi << ") = " << spherical_harmonic(l, m, theta, phi) << '\n';
    return 0;
}
