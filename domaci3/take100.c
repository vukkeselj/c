//bunar papir makaze
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define STR_MAX 20

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
    char unos_korisnika[STR_MAX];
    fgets(unos_korisnika, STR_MAX, stdin);
    char kamen[]="kamen ";
    char papir[]="papir ";
    char makaze[]="makaze ";
    srand(time(0));
    int x=strcm(unos_korisnika,kamen);
    int y=strcm(unos_korisnika,papir);
    int z=strcm(unos_korisnika,makaze);
    
    //poredjenje stringa koji je uneo user sa predefinisanim stringovima "kamen", "papir" i "makaze"
    
    if (x==1)
    {
        printf("korisnik je uneo: %s\n", unos_korisnika);
    }
    else if (y==1)
    {
        printf("korisnik je uneo: %s\n", unos_korisnika);
    }
    else if (z==1)
    {
        printf("korisnik je uneo: %s\n", unos_korisnika);
    }
    //izbor kompa
    int komp=rand()%3+1;
    if (komp==1)
    {
        printf("komp je odabrao: kamen\n");
    }
    else if(komp==2)
    {
        printf("komp je odabrao: papir\n");
    }
    else
    {
        printf("komp je odabrao: makaze\n");
    }
    
    if ((x==1)&&(komp==1))
    {
        printf("nereseno\n");
    }
    else if ((x==1)&&(komp==2))
    {
        printf("komp pobedio\n");
    }
    else if ((x==1)&&(komp==3))
    {
        printf("igrac pobedio\n");
    }
    else if ((y==1)&&(komp==1))
    {
        printf("igrac pobedio\n");
    }
    else if ((y==1)&&(komp==2))
    {
        printf("nereseno\n");
    }
    else if ((y==1)&&(komp==3))
    {
        printf("komp pobedio\n");
    }
    else if ((z==1)&&(komp==1))
    {
        printf("komp pobedio\n");
    }
    else if ((z==1)&&(komp==2))
    {
        printf("igrac pobedio\n");
    }
    else if ((z==1)&&(komp==3))
    {
        printf("nereseno\n");
    }
    else
    {
        printf("unos igraca nije dobar, pokrenite program ponovo\n");
    }
    
    return 0;
}
