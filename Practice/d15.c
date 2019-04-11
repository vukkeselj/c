#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    int opcija=0;
    printf("Unesite a: ");
    scanf("%d", &a);
    printf("Unesite b: ");
    scanf("%d", &b);
    
    do 
    {
        printf("unesite broj od 1 do 6: ");
        scanf("%d", &opcija);
        switch (opcija)
        {
            case 1:
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
