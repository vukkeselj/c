#include <stdio.h>

//mnozenje metodom sabiranja

int main()
{
    int a = 16;
    int b = 4;
    int c;
    
    for (c = 0; a>0; a--)
    {
        c = c + b;
    }
    
    
    printf("proizvod: %d\n", c);


    return 0;
}





