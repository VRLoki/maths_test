/* Rectangle Method */
#include <stdio.h>
#include <math.h>
/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/
#define f(x) 1 / (1 + x * x)

double rectangle_method(double a, double b, int n)
{
    double h, sum, x;
    int i;
    h = (b - a) / n;
    x = 0;
    sum = 0.0;
    for (i = 0; i <= n - 1; i++)
    {
        x = a + i*h;
        sum = sum + (h * f(x));
    }
    return sum;
}
