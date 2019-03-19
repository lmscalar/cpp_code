// calculate voltage of an AC circuit
// impedance.cpp
// author:  Luis A. Molina, 3/2019

#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
	const Complex j(0, 1);     // imaginary 1
	const double pi = 3.1415926535897931;
	
	double
		L = 0.03,         // inductance, in henries
		R = 5000,         // resistance, in ohms
		C = 0.02,         // capacitance, in farads
		freq = 60,        // frequency in hertz
		omega = 2 * pi * freq;     // frequency in radians/sec

	Complex
		I = 12,          // current
		Z, 		 // impedance
		V;		// voltage

	Z = R + j * omega * L + 1 / ( j * omega * C );
	V = Z * I;
	V.print();

}

