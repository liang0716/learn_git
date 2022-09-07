#include "cons.h"

int binarysearch(int *ptr, int data)
{
    printf("binarysearch start\n");
    int start, end, mid;
    start = 0;
    end = size - 1;

    while(start < end)
    {
        mid = (start + end) / 2;
        //printf("*(ptr +start):%d,  *(ptr + mid) = %d, *(ptr + end) = %d\n", *(ptr +start), *(ptr + mid), *(ptr + end));
        if(*(ptr + mid) > data)
        {
            end = mid - 1;
        }
        else if(*(ptr + mid) < data)
        {
            start = mid + 1;
        }
        else
        {
            printf("binarysearch end\n");
            return mid;
        }
    }
}
