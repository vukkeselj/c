#include<stdio.h>
#include<string.h>
#define STR_MAX 100


int strcm(char *str1, char *str2)
{
    int i=0;
    if (str1[i]==str2[i])
    {
        return 0;
    }
    else if
    {
        return 1;
    }
    else
}

int main()
{   
    char komp[100];
    srand (time(0));
    char a = rand ()%3;
    if (a==0)
    {
        komp="bunar";
    }
    else if (a==1)
    {
        komp="papir";
    }
    else
    {
        komp="makaze";
    }
    
    printf("%s\n", a);
    
    
    
    
    
    char b[100];
    fgets (b, STR_MAX, stdin);
    char *k1=a;
    char *k2=b;
    
    int x = strcm(k1,k2);
    do 
    {
        if (x==)
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
    while (x==0)
    return 0;
}





bunar   bunar
        papir
        makaze
      
papir   bunar
        papir
        makaze

makaze  bunar
        papir
        makaze









