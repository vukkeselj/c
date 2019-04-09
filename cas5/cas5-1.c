#include <stdio.h>
#include <string.h>
#define STR_MAX 100

void str_kopiraj(char *in, char *out, int n);


int main()
{
    char rec1[STR_MAX];
    char rec2[STR_MAX];
    fgets(rec1, STR_MAX, stdin);
    str_kopiraj(rec1, rec2, strlen(rec1));
    printf("%s\n", rec2);
    
    return 0;
}

void str_kopiraj(char *in, char *out, int n)
{
    int i=0;
    for (i=0; i<n; i++)
    {
        out[i]=in[i];
    }
}









