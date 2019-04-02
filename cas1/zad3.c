#include <stdio.h>

int main()
{
    int x = 0;
    printf("unesi vrednost izmedju 1 i 5: ");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("nedovoljan\n");
    }
    else if (x == 2)
    
        printf("dovoljan\n");
    
    else if (x == 3)
    
        printf("dobar\n");
    
    else if (x == 4)
    
        printf("vrlo dobar\n");
    
    else if (x == 5)
    
        printf("odlican\n");
    
    else
    
        printf("broj koji ste uneli ne spada u raspon od 1 do 5\n");
    
    return 0;
}
