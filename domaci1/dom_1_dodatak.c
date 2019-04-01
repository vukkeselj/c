#include <stdio.h>

#define NIZ_LEN 4

int main()
{
    int a[NIZ_LEN] = {324,54,6768,2};
    int b[NIZ_LEN] = {14,542,67,22};
    int c[NIZ_LEN];
    int i=0;
    int j=0;
    
    for (i=0; i<NIZ_LEN; i++)
    {
        c[i]=a[i]+b[i];
        printf("niz c: %d \n", c[i]);
    }
    
    
    return 0;



}






















