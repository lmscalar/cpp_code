// class member functions
// complex.cpp
// author: Luis A. Molina

#include <cstdio>
#include "complex.h"

void Complex::print()
{
	printf("( %5.2f, %5.2f )\n", re, im);

}

Complex operator + ( Complex a1, Complex a2) 
{
	return Complex( a1.re + a2.re, a1.im + a2.im);
}

Complex operator * ( Complex a1, Complex a2 )
{
	return Complex(a1.re * a2.re -a1.im * a2.im, a1.re * a2.im  + a1.im * a2.re);

}

Complex operator / ( Complex a1, Complex a2)
{
	double r = a2.re;    // (r,i)
	double i = a2.im;
	double ti;           // (tr, ti)
	double tr;

	tr = r < 0 ? -r : r;
	ti = i < 0 ? -i : i;

	if (tr <= ti){
		ti = r/i;
		tr = i * ( 1 + ti*ti);
		r = a1.re;
		i = a1.im;
	}
	else {
		ti = -i/r;
		tr = r * (1 + ti*ti);
		r = -a1.im;
		i = a1.re;
	}
	return Complex( (r*ti + i)/tr, (i*ti - r)/tr );
}


