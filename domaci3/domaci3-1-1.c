#include<stdlib.h>
//rand funkcija
//int a = rand()%11;
//ili ako imamo niz niz[3] onda treba kroz for populisati svaki element niza
//ako hoces da popunis niz elementima od 0 do 10 to se radi sa %11
//ako hoces da popunis niz elemenata od 1 do 10 to se radi sa %10 + 1
//gausova raspodela ?
//matematicka verovatnoca, treba znati za ML
//srand funkcija
//upariti sa vremenom da bi dobio svaki put razlicite brojeve




#include <stdio.h>

#define NIZ_LEN 3

int main(void)
{
    int a[NIZ_LEN];
    int b[NIZ_LEN];
    int c[NIZ_LEN];
    int i = 0;
    rand();
    for (i=0; i<NIZ_LEN; i++)
    {
        a[i]=rand();
        printf("%d \n", a[i]);    
    }
    for (i=0; i<NIZ_LEN; i++)
    {
        b[i]=rand();
        printf("%d \n", b[i]);    
    }
    
    printf("a[i] + b[i] niz\n");
    for (i = 0; i < NIZ_LEN; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d\n", c[i]);
    }
    printf("uporedi a[i] i b[i] niz\n");
    for(i = 0; i < NIZ_LEN; i++)
    {
        if (a[i] > b[i])
        {
            c[i] = a[i] - b[i];
            printf("%d\n", c[i]);
        }
        else
        {
            c[i] = b[i] - a[i];
            printf("%d\n", c[i]);
        }
    }
       
    return 0;
}
