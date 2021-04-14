#include "holberton.h"
#include <stdio.h>
#include <math.h>

double Modulus(complex c)
{
	double m;

	m = sqrt(c.re * c.re + c.im * c.im);
	return (m);
}
