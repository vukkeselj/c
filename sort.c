#include <stdio.h>

#define NIZ_LEN 10

int main()
{
    int niz[NIZ_LEN] = {5,6,3,100,5,7,9,1,-5,0};
    int temp;
    int i;
    int j;

    // Sortira u rastucem redosledu
    for (i = 0; i < NIZ_LEN-1; i++)
    {
        for (j = 0; j < NIZ_LEN-i-1; j++)
        {
            if (niz[j] > niz [j+1])
            {
                temp = niz[j];
                niz[j] = niz[j+1];
                niz[j+1] = temp;
            }
        }
    }

    for (i = 0; i < NIZ_LEN; i++)
    {
        printf("%d, ", niz[i]);
    }

    return 0;
}