#include <stdio.h>
#define STR_MAX 100


int main()
{
    int i = 0;
    int n = 0;
    int a[100];
    //a[2]==1;
    printf("Unesite n: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
       a[i]=a[i-1]+a[i-2];
       printf("%d\n", a[i]);
    }
}
