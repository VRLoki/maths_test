#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
   	complex c1, c2;
   	double mod, arg;
   	c1.im = 2;
   	c1.re = 2;
   	mod = Modulus(c1);
   	arg = Argument(c1);
   	DisplayComplexNumber(c1);
    ComplexFromModArg(mod, arg, &c2);
    DisplayComplexNumber(c2);
}
