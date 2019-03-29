#include <stdio.h>

int main ()
{

    int a=0;
    int b=0;
    int kolicnik=0;
    int ostatak=0;
    int i=0;
    
    while (a<=0)
    {
        printf("unesite a: \n");
        scanf("%d", &a); 
    }
    printf("a je %d \n", a);
    
    while (b<=0)
    {
        printf("unesite b: \n");
        scanf("%d", &b); 
    }
    printf("b je %d \n", b);
    
    do
    {
    i=a-b;
    }
    while (a<=b);
    printf("%d", i);
    
    return 0;
    
    
}










