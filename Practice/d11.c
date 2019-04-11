#include <stdio.h>
#define NIZ_LEN 10

int main()
{
    int a[NIZ_LEN];
    int b[NIZ_LEN];
    int c[NIZ_LEN];
    int i=0;
    int j=0;
    int k=0;
    
    srand(time(0));
    for (i=0; i<NIZ_LEN; i++)
    {
        a[i]=rand()%10;
        printf("%d\n", a[i]);
    }
    
    for (i=0; i<NIZ_LEN; i++)
    {
        b[i]=i;
        printf("niz b: %d\n", b[i]);
    }
    for (i=0; i<NIZ_LEN; i++)
    {
        if (a[i]==b[i])
        {
            c[i]= a[i]+b[i];
            printf("c=a+b: %d\n", c[i]);
        }
        else if (a[i]>b[i])
        {
            c[i]=a[i]-b[i];
            printf("c=a-b: %d\n", c[i]);
        }
        else 
        {
            c[i]=b[i]-a[i];
            printf("c=b-a: %d\n", c[i]);
        }
    }
    
    return 0;
}
