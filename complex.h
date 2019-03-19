#ifndef complex_h
#define complex_h

class Complex {

		double re, im;
	public:
		Complex( double r = 0, double i = 0)
			{ re = r, im = i;}
		void print();
		friend Complex operator +(Complex, Complex);
		friend Complex operator *(Complex, Complex);
		friend Complex operator /(Complex, Complex);

};




#endif /*complex_h */

