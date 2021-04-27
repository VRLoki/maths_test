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
	double arg;

	c1.re = 3;
	c1.im = 6;
	arg = argument(c1);
	printf("%f\n", arg);
	return (0);
}
