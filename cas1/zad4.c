#include <stdio.h>

int main()
{
    int ocena = 0;
    printf("unesi vrednost izmedju 1 i 5: ");
    scanf("%d", &ocena);
    
    switch(ocena)
    {
        case 5:
            printf("odlican\n");
            break;
        case 4:
            printf("vrlo dobar\n");
            break;
        case 3:
            printf("dobar\n");
            break;
        case 2:
            printf("dovoljan\n");
            break;
        case 1:
            printf("nedovoljan\n");
            break;            
        default:
            printf("broj koji ste uneli ne spada u raspon od 1 do 5\n");
    }
    return 0;
}
