#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 1; double s =0.0;
	while( n < 10000)
	{
		s = s + 1.0/n;
		n = n + n;
	}
	printf("The sum is %6.3f\n", s);
	
	printf("%d", 23 & 26);
	return 0;
}
