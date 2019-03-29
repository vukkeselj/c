#include <stdio.h>



int main()
{
    int a[16];
    int i = 0;
    a[0]=2;
    for (i=1; i<16; i++)
    {
        a[i]=a[i-1]*2;
        printf("%d \n", a[i]);
    }
    
    
    return 0;

}
