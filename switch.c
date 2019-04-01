#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int opcija = 0;
    printf("unesi vrednost a: ");
    scanf("%d", &a); 
    printf("unesi vrednost b: ");
    scanf("%d", &b);
    
    do
    {
        printf("unesi vrednost od 1 do 6\n");
        scanf("%d", &opcija);
        switch (opcija)
        {
            case 1:
                printf("a: %d\n", a);
                break;
            case 2:
                printf("b: %d\n", b);
                break;
            case 3:
                a = a + b;
                printf("a: %d\n", a);
                break;        
            case 4:
                a = a - b;
                printf("a: %d\n", a);
                break;
            case 5:
                b = a * b;
                printf("b: %d\n", b);
                break;
            case 6:
                printf("dovidjenja\n");
                break;
            default:
                printf("pogresan unos\n");
        }
    }
    while (opcija !=6);
    
       return 0;
}
