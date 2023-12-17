#include <cmath>
#include <numbers>
#include <complex>


std::complex<double> spherical_harmonic(int l, int m, double theta, double phi) {
    /* Spherical Harmonic Y_{lm}(\theta, \phi).
     *
     * Use m=0 when there is azimuthal symmetry.
     *
     * References
     * ----------
     *  https://en.cppreference.com/w/cpp/numeric/special_functions/sph_legendre
     *  https://www.youtube.com/watch?v=Ziz7t1HHwBw
     *  https://www.youtube.com/watch?v=YKGSN-98_Y4
     *  Griffiths and Jackson lol
     *
     */
    const std::complex<double> i(0.0, 1.0);
    return std::sph_legendre(l, m, theta) * std::exp(i * (double)m * phi);
}


//std::complex<double> fractional_spherical_harmonic(std::complex<double> l, std::complex<double> m, double theta, double phi) {
   /* TODO: explore! :)
    */
//} 
