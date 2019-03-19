#include <bits/stdc++.h>


int main()
{
// declare array

int V[5] = {2, 3, 4, 5, 7};

int *ptr;

ptr = V;

for(int i=0; i < 5; i++)
{
    printf("The array element is *ptr=%d\n", *ptr);
    printf("The array element address ptr=%p\n", ptr);

    *ptr++; // increment pointer location

}

return 0;

}