#include <stdlib.h>
#include <stdio.h>
#include "resource.h"



//int pow_int(int base, int pow);
//int binaryseach(int *ptr, int data);

int main(void)
{
    int i;
    int arr[size];
    printf("Hello bitch!\n");
    for(i = 0; i < size; i++)
    {
        arr[i] = pow_int(i, 2);
        //printf(" pow(%d, 2) = %d\n", i, pow_int(i, 2));
    }
    printf("binarysearch(arr[size], 64) = %d\n", binarysearch(arr, 64));
    printf("\n");
    return 0;
}
