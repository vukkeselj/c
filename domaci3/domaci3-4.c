#include <stdio.h>
#define STR_MAX 100

int fib(int n)
{
    int i = 0;
    
    int a[100];
    //a[2]==1;
    for (i=0; i<n; i++)
    {
       a[i]=a[i-1]+a[i-2];
       printf("%d\n", a[i]);
    }
}

int main()
{
    int m=0;
    printf("Unesite m: ");
    scanf("%d", &m);
    int y = fib(m);
    //printf("%d\n", y)

    return 0;
}









