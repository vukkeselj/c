#include <stdio.h>

#define NIZ_LEN 16
#define BAZA_STEPENA 2

int main()
{
    int niz[NIZ_LEN];
    int i;
    int j;

    for(i = 0; i < NIZ_LEN; i++)
    {
        niz[i] = 2;
        for(j = 0; j < i; j++)
        {
            niz[i] *= 2;
        }
    }    

    return 0;
}
