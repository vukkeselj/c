#include<stdio.h>
#include<string.h>
#define STR_MAX 100

int strcm(char *str1, char *str2)
{
    int i=0;
    if (strlen(str1)==strlen(str2))
    {
        while (str1[i] !=10)
        {
            if (str1[i]==str2[i])
            {
                i++;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{   
    char a[STR_MAX];
    printf("Unesite prvu rec: ");
    fgets (a, STR_MAX, stdin);
    char b[STR_MAX];
    printf("Unesite drugu rec: ");
    fgets (b, STR_MAX, stdin);
    
    int x = strcm(a,b);
    if (x==1)
    {
        printf("isti su\n");
    }
    else 
    {
        printf("nisu isti\n");
    }
    return 0;
}
