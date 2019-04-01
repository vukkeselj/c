#include <stdio.h>
#include <string.h>
#define STR_MAX 100

int main()
{
    char a[100];
    char b[100];
    fgets (a, STR_MAX, stdin);
    int i=0;
    
    while (a[i] != 0)
    {
        if (a[i]>=97 && a[i]<=122)
        {
            a[i]-=32;
        
        }
        
        i++;
    }
    printf("%s \n", a);
    
     
    return 0;
}
