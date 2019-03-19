#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	double s = 0.0;

	while( s < 7 ){
		n += 1;
		s +=  1.0/n;
	}
	printf("\t %d   %9.7f\n", n, s);
	return 0;
}
