#include <stdio.h>
#include <string.h>

#define STR_MAX 100


int main()
{
    char a[100];
    char b[100];
    gets (a);
    int i=0;
    int len=strlen(a);
    printf("%d \n", len);
    
    while (a[i] != 0)
    {
        if (a[i] != a[len-2-i])
        {
            break;
        }
        i++;
    }
    printf("nije isto\n");
    return 0;
}

