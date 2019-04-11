#include <stdio.h>
#define STR_MAX 100

int main()
{
    int a=0;
    int b=0;
    char opcija;
    printf("Unesite a: ");
    scanf("%d", &a);
    printf("Unesite b: ");
    scanf("%d", &b);
    
    do 
    {
        printf("unesite broj od 1 do 6: ");
        scanf("%c",&opcija);
        switch (opcija)
        {
            case 'kamen':
                printf("%d\n", a);
                break;
            case 2:
                printf("%d\n", b);
                break;
            case 3:
                printf("%d\n", a+b);
                break;
            case 4:
                printf("%d\n", a-b);
                break;
            case 55:
                printf("%d\n", a*b);
                break;
            case 6:
                break;
        }
    
    }
    while (opcija!=6);
    printf("gotovo\n");

    return 0;
}
