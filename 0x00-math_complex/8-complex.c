#include "holberton.h"
#include <stdio.h>
#include <math.h>

void ComplexFromModArg (double m, double arg, complex *c3)
{
    c3->re = m* cos(arg);
    c3->im = m* sin(arg);
}