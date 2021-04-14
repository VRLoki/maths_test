#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Creation of Struct complex
typedef struct
{
    double re;
    double im;
} complex;

// Conjugate function
void Conjugate(complex *c)
{
    c->im = -(c->im);
}

// Modulus function
double Modulus(complex c)
{
    double m =  sqrt(c.re*c.re+c.im*c.im);
    return m;
}

// Argument function
double Argument(complex c)
{
    double a;
    if (c.re==0 && c.im ==0)
   {
       a = 0;
   }
   else if(c.re != 0)
   {
       if ((c.re<0)&&(c.im<0))
       {
           a = atan(c.im/c.re) - M_PI;
       }
       else if ((c.re<0)&&(c.im>0))
       {
           a = atan(c.im/c.re) + M_PI;
       }
       else
       {
           a = atan(c.im/c.re);
       }
   }
    else {
        if (c.im<0){
       a= -M_PI/2;
       }
    else{
        a= M_PI/2;
    }}
    return a;
}

// Addition function
void Addition(complex c1, complex c2, complex *c3)
{
    c3->re=c1.re+c2.re;
    c3->im=c1.im+c2.im;
}

// Subtraction function
void Subtraction(complex c1, complex c2, complex *c3)
{
    c3->re=c1.re-c2.re;
    c3->im=c1.im-c2.im;
}

// Multiplication function
void Multiplication(complex c1, complex c2, complex *c3)
{
    c3->re=c1.re*c2.re - c1.im*c2.im;
    c3->im=c1.re*c2.im + c1.im*c2.re;
}

// Division function
void Division(complex c1, complex c2, complex *c3)
{
    c3->re=(c1.re*c2.re + c1.im*c2.im)/(c2.re*c2.re+c2.im*c2.im);
    c3->im=(-c1.re*c2.im + c1.im*c2.re)/(c2.re*c2.re+c2.im*c2.im);
}

// Real and imaginary parts of a complex number given from modulus and arguments
void ComplexFromModArg (double m, double arg, complex *c3){
    complex c;
    c3->re = m* cos(arg);
    c3->im = m* sin(arg);
}

// Display of the complex number
void ComplexNumber (complex c)
{
    if (c.im<0){
        printf("%g-i%g", c.re,-c.im);
    }
    else if(c.im==0){
        printf("%g", c.re);
    }
    else {
        printf("%g+i%g", c.re,c.im);
    }
}

//the main
int main()
{
    complex c1;
    complex c2;
    c1.re=1;
    c1.im=1;
    c2.re=1;
    c2.im=2;
    ComplexNumber (c1);
    ComplexNumber (c2);
    complex c3;
    Addition(c1,c2,&c3);
    ComplexNumber (c3);
    return 0;
}

