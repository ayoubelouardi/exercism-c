#include "complex_numbers.h"

complex_t c_add(complex_t a, complex_t b)
{
	complex_t result;

	result.real = A + C;
	result.imag = B + D;

	return (result);
}

complex_t c_sub(complex_t a, complex_t b)
{
	complex_t result;

	result.real = A - C;
	result.imag = B - D;

	return (result);
}

complex_t c_mul(complex_t a, complex_t b)
{
	complex_t result;

	result.real = A * C - B * D;
	result.imag = B * C + A * D;

	return (result);
}

complex_t c_div(complex_t a, complex_t b)
{
	complex_t result;

	result.real = (A * C + B * D) / (pow(C, 2) + pow(D, 2));
	result.imag = (B * C - A * D) / (pow(C, 2) + pow(D, 2));

	return (result);
}

double c_abs(complex_t a)
{
   return sqrt(pow(A, 2) + pow(B, 2));
}

complex_t c_conjugate(complex_t a)
{
	B = B * -1;

	return a;
}

double c_real(complex_t a)
{
	return A;
}

double c_imag(complex_t a)
{
	return B;
}

complex_t c_exp(complex_t a)
{
	complex_t result;

	result.real = exp(A) * cos(B);
	result.imag = exp(A) * sin(B);

	return result;
}
