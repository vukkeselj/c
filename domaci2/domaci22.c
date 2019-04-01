#include <stdio.h>

#define NIZ_LEN 4

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
    printf("prvi niz: %d \n", a[i]);
    for (j=i-1; j>=0; j--)
    {
        b[j]=j;
        printf("drugi niz: %d \n", b[j]);
    }
    return 0;


}





























