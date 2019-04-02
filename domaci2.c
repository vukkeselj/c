#include <stdio.h>

#define NIZ_LEN 10

int main()
{

    int a[NIZ_LEN];
    int b[NIZ_LEN];
    int i = 0;
    int j = 0;
    
    for (i=0; i<NIZ_LEN; i++)
    {
        a[i]=i;
        printf("prvi niz: %d \n", a[i]);
    }
    
    for (j=i-1; j>=0; j--)
    {
        b[j]=j;
        printf("drugi niz: %d \n", b[j]);
    }
    printf("\n");
    for (i=0; i<NIZ_LEN; i++)
    {
        printf("niz a i b: %d, %d \n", a[i], b[i]);
    }

    return 0;


}





























