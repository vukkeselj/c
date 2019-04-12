//bunar papir makaze
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define STR_MAX 20

int strcm(char *str1, char *str2)
{
    int i=0;
    //koristiti str_duzina
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
    char kamen[]="kamen\n";
    char papir[]="papir\n";
    char makaze[]="makaze\n";
    srand(time(0));
    int x=strcm(unos_korisnika,kamen);
    int y=strcm(unos_korisnika,papir);
    int z=strcm(unos_korisnika,makaze);
    int igrac;
    
    //poredjenje stringa koji je uneo user sa predefinisanim stringovima "kamen", "papir" i "makaze"
    
    if (strcm(unos_korisnika,kamen))
    {
        printf("korisnik je uneo: %s\n", unos_korisnika);
        igrac = 1;
    }
    else if (y==1)
    {
        printf("korisnik je uneo: %s\n", unos_korisnika);
        igrac = 2;
    }
    else if (z==1)
    {
        printf("korisnik je uneo: %s\n", unos_korisnika);
        igrac = 3;
    }
    else
    {
        igrac = 0;
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
    
    if (igrac==0)
    {
        printf("unos igraca nije dobar, pokrenite program ponovo\n");
    }
    else if ((komp==1)&&(igrac==3))
    {
        printf("komp pobedio\n");
    }
    else if ((komp==3)&&(igrac==1))
    {
        printf("igrac pobedio\n");
    }       
    else if (komp > igrac)
    {
        printf("komp pobedio\n");
    }
    else if (igrac > komp)
    {
        printf("igrac pobedio\n");
    }
    else
    {
        printf("nereseno\n");
    }
    
    return 0;
}
