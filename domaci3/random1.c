#include <stdio.h>
#define STR_MAX 100


int main()
{
    char str[100];
    fgets(str, STR_MAX, stdin);
    int i=0;
    while (str[i]!=0)
    {
        i++;
    }
    printf("%d\n", i);
    return 0;
}
