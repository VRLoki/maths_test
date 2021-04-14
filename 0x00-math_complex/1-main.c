#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	complex c1;

	c1.re = 1;
	c1.im = 2;
	c1 = Conjugate(c1);
	DisplayComplexNumber(c1);
	c1 = Conjugate(c1);
	DisplayComplexNumber(c1);
	return (0);
}
