#include <stdio.h>

#define NIZ_LEN 10

int main()
{
    int a[NIZ_LEN];
    int b[NIZ_LEN];
    int c[NIZ_LEN];
    int i=0;
    int j=0;
    
    for (i=0; i<NIZ_LEN; i++)
    {
        a[i]= i;
        printf("niz a: %d \n", a[i]);
    }
    
    for (i=0; i<NIZ_LEN; i++)
    {
        b[i]= i+2;
        printf("niz b: %d \n", b[i]);
    }
    
    for (i=0; i<NIZ_LEN; i++)
    {
        c[i]=a[i]+b[i];
        printf("niz c: %d \n", c[i]);
    }
    
    
    return 0;



}






















