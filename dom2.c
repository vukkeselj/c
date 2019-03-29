#include <stdio.h>

#define NIZ_LEN 10

int main()
{
    int a[NIZ_LEN];
    int b[NIZ_LEN];
    int c[NIZ_LEN];
    int x=0;
    int y=0;
    printf("unesi vrednost za niz a: \n");
    scanf("%d", &x);
    printf("unesi vrednost za niz b: \n");
    scanf("%d", &y);
    int i=0;
    int j=0;
    
    for (i=0; i<NIZ_LEN; i++)
    {
        a[i]= i+x;
        printf("niz a: %d \n", a[i]);
    }
    
    for (i=0; i<NIZ_LEN; i++)
    {
        b[i]= i+y;
        printf("niz b: %d \n", b[i]);
    }
    i=0;
    if (a[i]>b[i])
    {
        for (i=0; i<NIZ_LEN; i++)
        {
            c[i]=a[i]-b[i];
            printf("niz c: A vece od B %d \n", c[i]);
        }
      
    }
    else if (a[i]<b[i])
    {
        for (i=0; i<NIZ_LEN; i++)
        {
            c[i]=b[i]-a[i];
            printf("niz c: B vece od A %d \n", c[i]);
        }
    }
    else 
    
    return 0;



}






















