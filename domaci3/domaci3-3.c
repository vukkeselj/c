#include <stdio.h>
#define STR_MAX 100

int strle(char *str)
{
    int i=0;
    while (str[i]!=10)
    {
        i++;
    }
    return i;
    //printf("%d\n", i-1);
}

int main()
{
    char a[100];
    fgets(a, STR_MAX, stdin);
    int y = strle(a);
    printf("%d\n", y);
    return 0;
}
