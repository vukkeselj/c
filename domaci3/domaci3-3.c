#include <stdio.h>
#define STR_MAX 100

int strle(char *str)
{
    int i=0;
    while (str[i]!=0)
    {
        i++;
    }
    printf("%d\n", i-1);
}

int main()
{
    char a[100];
    fgets(a, STR_MAX, stdin);
    int y = strle(a);
    return 0;
}
