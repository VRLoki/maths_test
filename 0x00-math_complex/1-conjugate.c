#include "holberton.h"

complex conjugate(complex c)
{
	c.im = -(c.im);
	return (c);
}
