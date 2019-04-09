#include <stdio.h>
#define STR_MAX 100


int main()
{
    srand (time(0));
    char a = rand ()%3;
    printf("%s\n", a);
    return 0;
}
