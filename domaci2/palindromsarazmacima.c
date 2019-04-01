#include <stdio.h>
#include <string.h>

#define STR_MAX 100

int main()
{
    char a[100];
    fgets (a, STR_MAX, stdin);
    
    char *pocetak = a;
    char *kraj = a;
    //Pronadje kraj
    while(*kraj != 10)
    {
        kraj++;
    }
    kraj--;
    
    
    while (pocetak < kraj)
    {
        while (!(((*pocetak >= 'a') && (*pocetak <= 'z'))
        ||       ((*pocetak >= 'A') && (*pocetak <= 'Z'))))
        {
            pocetak++;
        }
        while (!(((*kraj >= 'a') && (*kraj <= 'z'))
        ||       ((*kraj >= 'A') && (*kraj <= 'Z'))))
        {
            kraj--;
        }
        //printf("%c, %c", *pocetak, *kraj);
        if ((*pocetak) != (*kraj))
        {
            printf("nije isto\n");
            break;
        }
        
        pocetak++;
        kraj--;
    }
    printf("isto je\n");
    return 0;
}

