#include <bits/stdc++.h>

const double sqrt_5 = sqrt(5);
const double phi = (1. + sqrt_5) / 2.;
const double phi_conjugate = (1. - sqrt_5) / 2.;

unsigned long long fibonacci_formula(int n) {
    return floor((pow(phi ,n) - pow(phi_conjugate ,n)) / sqrt_5);
}
