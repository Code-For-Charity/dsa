import math

SQRT_5 = math.sqrt(5.)
PHI = (1. + SQRT_5) / 2.
PHI_CONJUGATE = (1. - SQRT_5) / 2.

def fibonacci_formula(n):
    return math.floor((math.pow(PHI, n) - math.pow(PHI_CONJUGATE, n)) / SQRT_5)
