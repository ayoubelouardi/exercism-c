#ifndef COMPLEX_NUMBERS_H
#define COMPLEX_NUMBERS_H

#include <math.h>



#define A a.real
#define B a.imag
#define C b.real
#define D b.imag
#define I sqrt(-1)



typedef struct {
   double real;
   double imag;
} complex_t;

complex_t c_add(complex_t a, complex_t b);
complex_t c_sub(complex_t a, complex_t b);
complex_t c_mul(complex_t a, complex_t b);
complex_t c_div(complex_t a, complex_t b);
double c_abs(complex_t x);
complex_t c_conjugate(complex_t x);
double c_real(complex_t x);
double c_imag(complex_t x);
complex_t c_exp(complex_t x);

#endif