/*
 * nvalue.c:  Compute the smallest n satisfying 1 + 1/2 + 1/3 + .. + 1/n >= 5
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	double s = 0.0;

	while(s < 5.0)
	{
		n += 1;
		s = s + 1.0/n;
	}

	printf("\t n= %d   s = %9.7f\n", n, s);

	return 0;

}
