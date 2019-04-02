#include <stdio.h>

#define MAX 10



int init_int_array(int *arr, int size)
{
    int i;
    for (i=0; i<MAX;i++)
    {
        arr[i]=0;
    }
    return 0;
}

int main ()
{
    int niz[MAX];
    init_int_array(niz, MAX);
    
}
