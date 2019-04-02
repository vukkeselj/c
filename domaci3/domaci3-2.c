#include<stdio.h>
#include<string.h>
#define STR_MAX 100


int strcm(char *str1, char *str2)
{
    int i=0;
    if (str1[i]==str2[i])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{   
    int i=0;
    char a[100];
    fgets (a, STR_MAX, stdin);
    char b[100];
    fgets (b, STR_MAX, stdin);
    char *k1=a;
    char *k2=b;
    
    int x = strcm(k1,k2);
    if (x==1)
    {
        printf("isti su\n");
        printf("%s\n", k1);
        printf("%s\n", k2);
    }
    else 
    {
        printf("nisu isti\n");
        printf("%s\n", k1);
        printf("%s\n", k2);
    }
    return 0;
}
