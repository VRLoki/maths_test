#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
   	complex c1, c2, c3;
    c1.re=1;
    c1.im=1;
    c2.re=1;
    c2.im=2;
    DisplayComplexNumber(c1);
    DisplayComplexNumber(c2);
    Addition(c1,c2,&c3);
    DisplayComplexNumber(c3);
}