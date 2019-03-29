#include <stdio.h>



int main()
{
    int n=0;
    int i=0;
    int a=1; 
    printf("unesite n: ");
    scanf("%d", &n);
    printf("%d \n", n);
    
    for (i=0; i<n; i++)
    {
        a*=2;
    }
    printf("rezultat je: %d \n", a);
    
    return 0;
}
