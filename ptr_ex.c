#include <stdio.h>

int main()
{

    int Var = 21;

    int *ptr;

    ptr = &Var;

    printf("The number is %d\n", *ptr);

    return 0;


}
