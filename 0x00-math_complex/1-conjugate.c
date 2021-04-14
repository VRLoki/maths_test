#include "holberton.h"

complex Conjugate(complex c)
{
	c.im = -(c.im);
	return (c);
}
