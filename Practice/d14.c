#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NIZ_LEN 10

int main()
{
    int niz[NIZ_LEN];
    srand(time(0));
    //rand();
    int i=0;
    int j=0;
    int k=0;
    int privremena=0;
    for (j=0;j<NIZ_LEN;j++)
    {
        niz[j]=rand()%100;
        printf("%d\n", niz[j]);
    }
    for (j=0; j<NIZ_LEN-1; j++)
    {
        for (i=0;i<NIZ_LEN-1; i++)
        // treba da bude for (i=0;i<NIZ_LEN-i-1; i++)
        {
            if (niz[i]>niz[i+1])
            {
                privremena=niz[i];
                niz[i]=niz[i+1];
                niz[i+1]=privremena;

            }
        }
    }
    for (k=0;k<NIZ_LEN;k++)
    {
        printf("novi niz: %d\n", niz[k]);
    }
    //printf("%d\n", i);
    //printf("%d\n", niz[i]);




    return 0;
}

