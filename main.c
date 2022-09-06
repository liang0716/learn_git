#include <stdlib.h>
#include <stdio.h>
#include "power.c"

#define size 5
int pow_int(int base, int pow);
int main(void)
{
    int i;

    printf("Hello hell!\n");
    for(i = 0; i < size; i++)
    {
        printf(" pow(%d, 2) = %d\n", i, pow_int(i, 2));
    }
    printf("\n");
    return 0;
}
